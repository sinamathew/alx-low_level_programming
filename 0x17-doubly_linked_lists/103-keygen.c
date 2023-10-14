#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

/**
 * main - keygen for the crackme5 program
 * @argc: arguments count
 * @argv: arguments
 *
 * Description: It ain't easy at all
 * By: Sina Mathew
 * Return: 0 if successful, else 1
 */
int main(int argc, char **argv)
{
	char c = 0, *str = NULL;
	int32_t len = 0, h = 0, str_sum = 0, str_prd = 1, str_mx = 0,
		str_sq = 0;
	/* bank is 0x7ffffffee270 - 80 and spans 64 bytes */
	char bank[] = {65, 45, 67, 72, 82, 68, 119, 56,
					55, 108, 78, 83, 48, 69, 57, 66,
					50, 84, 105, 98, 103, 112, 110, 77,
					86, 121, 115, 53, 88, 122, 118, 116,
					79, 71, 74, 99, 89, 76, 85, 43,
					52, 109, 106, 87, 54, 102, 120, 113,
					90, 101, 70, 51, 81, 97, 49, 114,
					80, 104, 100, 75, 73, 111, 117, 107};

	if (argc != 2 || **argv == '\0')
		return (printf("Usage: %s username\n", argv[0]), 1);
	str = argv[1];
	while ((c = str[len]))
		str_sum += c, str_prd *= c, str_mx = c > str_mx ? c : str_mx,
			str_sq += c * c, ++len;
	h = (len ^ 59) & 63;
	putchar(bank[h]);
	h = (str_sum ^ 79) & 63;
	putchar(bank[h]);
	h = (str_prd ^ 85) & 63;
	putchar(bank[h]);

	h = (str_mx ^ 14);
	srand(h);
	h = rand() & 63; /* rand(h)? */
	putchar(bank[h]);
	h = (((unsigned char)str_sq) ^ 0xef) & 63;
	putchar(bank[h]);

	c = str[0];
	while (c-- > 0)
		h = rand(); /* rand(h)? */
	h = (((unsigned char)h) ^ 0xe5) & 63;
	putchar(bank[h]);
	return (0);
}
