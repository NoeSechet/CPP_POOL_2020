/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** castmania
*/

#include <stdio.h>
#include "castmania.h"

void function_check_div(instruction_t *instruc)
{
    if (((division_t *)instruc->operation)->div_type == INTEGER) {
        printf("%d\n",
            ((integer_op_t *)((division_t *)
            instruc->operation)->div_op)->res);
    } else {
        printf("%f\n",
            ((decimale_op_t *)((division_t *)
            instruc->operation)->div_op)->res);
    }
}

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *instruc = (instruction_t *)data;
    int check_div = 0;
    if (instruction_type == ADD_OPERATION)
        exec_add(instruc->operation);

    if (instruction_type == DIV_OPERATION) {
        exec_div(instruc->operation);
        check_div = 1;
    }
    if ((instruc->output_type == VERBOSE) && (check_div == 1)) {
        function_check_div(instruc);
    }
    if (instruc->output_type == VERBOSE && check_div == 0)
        printf("%d\n", ((addition_t *)instruc->operation)->add_op.res);
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    switch (instruction_type) {
        case PRINT_INT:
            printf("%d\n", *(int *)data);
            break;
        case PRINT_FLOAT:
            printf("%f\n", *(float *)data);
            break;
        default:
            exec_operation(instruction_type, data);
            break;
    }
}