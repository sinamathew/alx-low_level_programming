#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on incorrect number of arguments, 2 on negative byte
 */

int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return 2;
	}

	unsigned char *main_addr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", main_addr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return 0;
}
