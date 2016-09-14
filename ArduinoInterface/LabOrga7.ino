//IntructionMemory
char regs[][3] = {"r0","r1","r2","r3"};

char program[][5] = 
{
"4800",
"4A00",
"4C00",
"4E00",
"500A"
};

int programSize=5;

int PC[] = {13,12,11,10,9,8,7,6};
int bitsPC[] = {0,0,0,0,0,0,0,0};

int instruction[] = {22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37};
int bitsInstruction[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

char *namesEflags[16] = {"IsZero","IsOverFlow","IsSigned"};
int eflags[] = {48,49,50};
int bitsEflags[] = {0,0,0};
int cantFlags = 3;

int readAddr[] = {38,39};//2 bits nada mas: 
int bitsReadAddr[] = {0,0};

int readData[] = {40,41,42,43,44,45,46,47}; //libres: ,52,53
int bitsReadData[] = {0,0,0,0,0,0,0,0};

int currentInstruction=0;
int writeEnable = 51;
int timeout = 100;
int sizeWord = 16;
bool processDone = 0;

char state = 'n'; //n: none; p: program; e: empty
char command[20] = "\0";

void hexToBinary(const char *hexaDecimal, int *out, int size);
void toBinary(int num, int *out, int size);
int toDecimal(int *bits,int size);
void reset();
void checkSerial();
void programming();
void readWord();
void showFlags();
void fill();
void clean();

void setup() {
  Serial.begin(9600);

  pinMode(writeEnable,OUTPUT);
  digitalWrite(writeEnable,LOW);

  pinMode(processDone,INPUT);
  
  for(int i=0;i<sizeWord/2;i++)
  {
    pinMode(PC[i],OUTPUT);
    digitalWrite(PC[i],LOW);
  }

  for(int i=0;i<sizeWord;i++)
  {
    pinMode(instruction[i],OUTPUT);
    digitalWrite(instruction[i],LOW);
  }

  for(int i=0; i<2;i++)
  {
    pinMode(readAddr[i],OUTPUT);
    digitalWrite(readAddr[i],LOW);
  }

  for(int i=0; i<sizeWord/2;i++)
  {
    pinMode(readData[i],INPUT);
  }
}

void loop() {
  switch(state)
  {
    case 'n': 
      checkSerial();
      break;
    case 'p':
      digitalWrite(writeEnable,HIGH);
      delay(timeout);
      programming();
      delay(timeout);
      digitalWrite(writeEnable,LOW);
    break;
    default:
      state = 'n';
      break;
  }
}

void toBinary(int num, int *out,int size)
{
  for(int i=size-1;i>=0;i--)
  {
     out[i]=num%2;
     num=num/2;
  }
}

int toDecimal(int *bits,int size)
{
  int num=0;
  for(int i=0, pot=size-1;i<size;i++, pot--)
  {
     if(bits[i]==1)
     {
        num+=pow(2,pot);
     }
  }
  return num;
}

void reset()
{
  currentInstruction=0;
  for(int i=0;i<16;i++)
  {
    if(i<8)
      bitsPC[i]=0;
    bitsInstruction[i]=0;
  }
}

void checkSerial()
{
   int c=0;
   while(Serial.available())
   {
     command[c] = Serial.read();
     c++;
   }
   command[c] = '\0';
   if(c>0)
    Serial.println(command);
   delay(timeout);

   char *tmp = strtok(command, " ");

   if(strcmp(tmp,"read")==0)
   {
      //Serial.println(tmp);
      tmp = strtok(NULL, " ");
      
      //show regs
      for(int i=0;i<4;i++)
      {
        if(strcmp(tmp,regs[i])==0)
        {
          toBinary(i,bitsReadAddr,2);
          Serial.print("RegAddr: ");
          for(int j=0;j<2;j++)
          {
            Serial.print(bitsReadAddr[j]);
          }
          Serial.print(" Result: ");
          delay(timeout);
          readWord();
          delay(timeout);
          Serial.println(toDecimal(bitsReadData,sizeWord/2));
          break;
        }
      }

      //show eflas
      if(strcmp(tmp,"eflags")==0)
      {
        showFlags();
      }
      
      state = 'e';
   }

   if(strcmp(tmp,"program")==0)
   {
     //Serial.println(tmp);
     reset();
     state = 'p';
   }else {
    //clean();
    state = 'e';
   }
}


void programming()
{
  for(int i=0; i<programSize; i++) {
    hexToBinary(program[i],bitsInstruction,sizeWord);
    toBinary(currentInstruction,bitsPC,sizeWord/2);
    Serial.print(currentInstruction);
    Serial.print(": ");
    for(int j=0;j<sizeWord/2;j++)
    {
      digitalWrite(PC[j],bitsPC[j]);
    }
    for(int j=0;j<sizeWord;j++)
    {
      //if(j<sizeWord/2)
      //  digitalWrite(PC[j],bitsPC[j]);
      digitalWrite(instruction[j],bitsInstruction[j]);
      Serial.print(bitsInstruction[j]);
    }
    Serial.print(" PC: ");
    for(int j=0;j<8;j++)
    {
      Serial.print(bitsPC[j]);
    }
    Serial.println();
    delay(timeout);
    currentInstruction++;
  }
  fill();
  state='e';
}

void readWord()
{
  for(int i=0; i<2; i++) {
    //valor read address
    digitalWrite(readAddr[i],bitsReadAddr[i]);
  }
  delay(timeout*2);
  for(int i=0; i<sizeWord/2; i++) {
    //Input readData
    bitsReadData[i] = digitalRead(readData[i]);
  }
  state = 'e';
}

void hexToBinary(char *hexaDecimal, int *out, int size)
{
    long int i=0;
    String hex=String();
    while(hexaDecimal[i])
    {
         switch(hexaDecimal[i])
         {
             case '0': hex+="0000"; break;
             case '1': hex+="0001"; break;
             case '2': hex+="0010"; break;
             case '3': hex+="0011"; break;
             case '4': hex+="0100"; break;
             case '5': hex+="0101"; break;
             case '6': hex+="0110"; break;
             case '7': hex+="0111"; break;
             case '8': hex+="1000"; break;
             case '9': hex+="1001"; break;
             case 'A': hex+="1010"; break;
             case 'B': hex+="1011"; break;
             case 'C': hex+="1100"; break;
             case 'D': hex+="1101"; break;
             case 'E': hex+="1110"; break;
             case 'F': hex+="1111"; break;
             case 'a': hex+="1010"; break;
             case 'b': hex+="1011"; break;
             case 'c': hex+="1100"; break;
             case 'd': hex+="1101"; break;
             case 'e': hex+="1110"; break;
             case 'f': hex+="1111"; break;
             default:  hex="0";
         }
         i++;
    }
    
    //Serial.println(hex);
    for(int i=0;i<size;i++)
    {
       out[i]=getInt(hex.charAt(i));
    }
}

int getInt(char c)
{
  switch(c)
  {
    case '0': return 0;
    case '1': return 1;
  }
}

void showFlags()
{
  for(int i=0;i<cantFlags;i++)
  {
    bitsEflags[i] = digitalRead(eflags[i]);
  }

  delay(timeout);

  for(int i=0; i<cantFlags; i++)
  {
    Serial.print(namesEflags[i]);
    Serial.print(": ");
    Serial.println(bitsEflags[i]);
  }
}

void fill()
{
  while(currentInstruction<256)
  {
    toBinary(currentInstruction,bitsPC,sizeWord/2);
    Serial.print(currentInstruction);
    Serial.print(": ");
    for(int j=0;j<sizeWord/2;j++)
    {
      digitalWrite(PC[j],bitsPC[j]);
    }
    for(int j=0;j<sizeWord;j++)
    {
      //if(j<sizeWord/2)
      //  digitalWrite(PC[j],bitsPC[j]);
      digitalWrite(instruction[j],LOW);
      Serial.print(0);
    }
    Serial.print(" PC: ");
    for(int i=0;i<8;i++)
    {
      Serial.print(bitsPC[i]);
    }
    Serial.println();
    delay(timeout);
    currentInstruction++;
  }
}
void clean()
{
  digitalWrite(writeEnable,LOW);

  for(int i=0;i<sizeWord/2;i++)
  {
    digitalWrite(PC[i],LOW);
  }

  for(int i=0;i<sizeWord;i++)
  {
    digitalWrite(instruction[i],LOW);
  }

  for(int i=0; i<2;i++)
  {
    digitalWrite(readAddr[i],LOW);
  }

  for(int i=0;i<sizeWord;i++)
  {
    bitsInstruction[i]=0;
    if(i<8){
      bitsPC[i]=0;
      bitsReadData[i]=0;
    }
    if(i<3)
      bitsEflags[i]=0;
    if(i<2)
      bitsReadAddr[i]=0;
  }
}

