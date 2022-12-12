
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name mux2 -dir "D:/Xilinx_ISE_14.7/ISE_project/mux2/planAhead_run_1" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/Xilinx_ISE_14.7/ISE_project/mux2/mux2.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/Xilinx_ISE_14.7/ISE_project/mux2} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "mux2.ucf" [current_fileset -constrset]
add_files [list {mux2.ucf}] -fileset [get_property constrset [current_run]]
link_design
