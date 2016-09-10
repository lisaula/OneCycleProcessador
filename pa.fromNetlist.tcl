
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name Processador -dir "C:/Users/Raim/Documents/Lab_Orga_Archivos/Processador/planAhead_run_1" -part xc3s500eft256-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Raim/Documents/Lab_Orga_Archivos/Processador/Main.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Raim/Documents/Lab_Orga_Archivos/Processador} }
set_property target_constrs_file "Mapeo.ucf" [current_fileset -constrset]
add_files [list {Mapeo.ucf}] -fileset [get_property constrset [current_run]]
link_design
