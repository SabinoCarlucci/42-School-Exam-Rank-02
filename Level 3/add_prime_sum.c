/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/add_prime_sum

Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$> */

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int	ft_atoi(char *stringa)
{
	int count;
	int	output;

	count = 0;
	output = 0;
	while (stringa[count])
	{
		if (stringa[count] < '0' || stringa[count] > '9')
			return (0);
		output = output * 10 + (stringa[count] - 48);
		count++;
	}
	return (output);
}

int ft_is_prime(int number)
{
	int div = 2;

	while (div < number)
	{
		if (number % div == 0)
			return (0);
		div++;
	}
	return (1);
}

void write_number (int num)
{
	if (num > 9)
		write_number (num / 10);
	char digit = num % 10 + '0';
	write (1, &digit, 1);
}

int	main(int argc, char **argv)
{
	int num = 0;
	int somma = 0;

	if (argc != 2)
		write(1, "0", 1);
	else
	{
		num = ft_atoi(argv[1]);
		/* if (num <= 1)
			write(1, "0", 1); */
		while (num > 1)
		{
			if (ft_is_prime(num))
				somma += num;
			num--;
		}
		write_number(somma);
	}
	write(1, "\n", 1);
	return (0);
}