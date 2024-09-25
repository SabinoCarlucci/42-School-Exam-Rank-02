/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/ft_atoi_base

Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
 */

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char smaller (char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

int get_char (char c, int base)
{
	int max;

	if (base <= 10)
		max = base - 1 + '0';
	else
		max = base - 10 -1 + 'a';

	if (c >= '0' && c <= '9' && c <= max)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	//variabili
	int sign = 1;
	int result = 0;
	int this_char = 0;

	if (str == NULL || str_base <= 1 || str_base > 16)
		return (0);

	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while (*str)
	{
		this_char = get_char(smaller(*str), str_base);
		if (this_char == -1)
			break ;
		result = result * str_base + this_char;
		str++;
	}
	return (result * sign);
}

int main (int argc, char **argv)
{
	argc = 1;
	int base = atoi(argv[2]);
	printf("%d\n", ft_atoi_base (argv[1], base));
}