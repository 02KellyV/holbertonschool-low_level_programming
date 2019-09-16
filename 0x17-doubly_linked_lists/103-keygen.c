#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - key generate
 * @argc: arguments number
 * @argv: arguments value
 * Return: 0 success, 1 error
 */
int main(int argc, char *argv[])
{
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";
	size_t len, add;
	unsigned int i, b;

	if (argc != 2)
		return (1);
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];

	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	p[1] = l[(add ^ 79) & 63];

	for (i = 0, b = 1; i < len; i++)
		b *= argv[1][i];
	p[2] = l[(b ^ 85) & 63];

	for (b = argv[1][0], i = 0; i < len; i++)
		if ((char)b <= argv[1][i])
			b = argv[1][i];
	srand(b ^ 14);
	p[3] = l[rand() & 63];

	for (b = 0, i = 0; i < len; i++)
		b += argv[1][i] * argv[1][i];
	p[4] = l[(b ^ 239) & 63];

	for (b = 0, i = 0; (char)i < argv[1][0]; i++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
