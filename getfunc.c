#include "monty.h"

/**
 * getfunc - selects the correct function to perform the
 * operation asked by the opcode in the script file
 * @opcode: the opcode to be evaluated
 * Return: pointer to the function that corresponds to the opcode
 */
void (*getfunc(char *opcode))(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t op_struct[] = {
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
	    {"stack", _stack},
        {"queue", _queue},
		{NULL, NULL}};
	{

		/* Loop through the instruction tab and compare the token to the opcode */
		/* Check if token matches instruction opcode */
		for (; op_struct[i].opcode != NULL; i++)
		{
			if (strcmp(opcode, op_struct[i].opcode) == 0)
				return (op_struct[i].f);
		}
		return (NULL);
	}
}
