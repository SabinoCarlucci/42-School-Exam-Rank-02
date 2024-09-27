/* 

https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/paramsum

Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$> */

#include <unistd.h>

void write_num(int number)
{
	char character;

	if (number > 9)
	{
		number = number / 10;
		write_num(number);
	}
	character = (number % 10) + '0';
	write(1, &character, 1);	
}

int main (int argc, char **argv)
{
	if (argv)
		;
	write_num(argc - 1);
	write(1, "\n", 1);
	return (0);
}