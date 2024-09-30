/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/tab_mult

Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
 */

#include <unistd.h>

int ft_atoi(char *num)
{
	int count = 0;
	int out = 0;
	while (num[count])
	{
		out = out * 10;
		out = out + (num[count] - '0');
		count++;
	}
	return (out);
	//forse parsing
}

void ft_put_char(char c)
{
	write(1, &c, 1);
}

void put_num(int num)
{
	if (num / 10 > 0)
		put_num(num / 10);
	ft_put_char(num % 10 + '0');
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int mult = 1;
		char mult_str[] = "0\0";
		int input_c = 0;
		int input_num;
		int res = 0;

		while (mult < 10)
		{
			mult_str[0] = mult + '0'; 
			write(1, mult_str, 1);
			write(1, " x ", 3);
			while(argv[1][input_c])
				input_c++;
			write(1, argv[1], input_c);
			write(1, " = ", 3);
			input_num = ft_atoi(argv[1]);
			res = mult * input_num;
			put_num(res);
			write (1, "\n", 1);
			mult++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}