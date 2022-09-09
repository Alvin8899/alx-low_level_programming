#include <stdio.h>
/**
 *main -is the entry point for the program.
 *
 *Return:zero if no error, Non-zero value  if errors.
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}

Task 7
Vi 100-intel

#!/bin/bash
gcc -S -masm=intel $CFILE

Task 8
Vi 101-quote.c

#include <unistd.h>
/**
 *main-program entry point.
 *
 *Return: 1 on success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
  
