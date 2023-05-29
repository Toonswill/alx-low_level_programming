#include <stdio.h>

/**
 * reset_to_98 - updates the value of the varible
 * the pointer points to 98
 * @n: pointer to the variable to update
 */
void reset_to_98(int *n)
{
	*n = 98;
}
/**
 * main - entry point of the program
 *
 * return: 0 on successful excecution
 */

int main(void)
{
	int num = 10;

	printf("Before reset:%d\n", num);

	reset_to_98(&num);
	printf("After reset: %d\n", num);

	return (0);
}
