#include "RTE_SWC1.h"  // Include the generated header file

void SUM()
{
    // Declare variables
    Std_ReturnType status = E_NOT_OK; // Status variable for function calls
    unsigned short x, y; // Variables to store input values
    unsigned int z; // Variable to store the result

    // Read input value 1 from the RTE (Runtime Environment)
    status = RTE_Read_sum_calc_runnable_RP_input_VAL1(&x);

    // Read input value 2 from the RTE (Runtime Environment)
    status = RTE_Read_sum_calc_runnable_RP_input_VAL2(&y);

    // Calculate the sum of input values
    z = x + y;

    // Write the result back to the RTE (Runtime Environment)
    status = RTE_Write_sum_calc_runnable_PP_sum_result_sum_result(z);
}
