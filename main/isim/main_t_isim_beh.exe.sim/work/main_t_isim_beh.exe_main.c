/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003350919863_2347679131_init();
    work_m_00000000001312115010_2725559894_init();
    work_m_00000000003725257094_0992325708_init();
    work_m_00000000002195543643_0286164271_init();
    work_m_00000000000676036552_2823621497_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000676036552_2823621497");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
