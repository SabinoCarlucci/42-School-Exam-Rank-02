/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/print_hex

Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$ */

#include <unistd.h>

int ft_atoi(char *str)
{
	int num = 0;
	int count = 0;

	while (str[count])
	{
		num = num * 10;
		num = num + (str[count] - '0');
		count++;
	}
	return (num);
}

void print_hex(int num)
{
	char digits[] = "0123456789abcdef";

	if (num >= 16)
		print_hex(num / 16);
	write(1, &digits[num % 16],1);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int number;

		number = ft_atoi(argv[1]);
		print_hex(number);
	}
	write (1, "\n", 1);
	return (0);
}