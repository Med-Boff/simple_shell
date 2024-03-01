#include <stdio.h>
#include <stdlib.h>

/**
 * main - core main of the SHELL
 *
 * Return: always 0
 */

int main(void)
{
	char *input;
	size_t length;
	ssize_t read;

	printf("$ ");

	while ((read = getline(&input, &length, stdin)) != -1)
	{
		printf("$ ");
		free(input);
		input = NULL;
		length = 0;
	}

	free(input);
	printf("\n");
	return (0);
}
