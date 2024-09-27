/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/pgcd

Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int div = 1;
		int hcd = div;
		int lower;

		if (a <= b)
			lower = a;
		else
			lower = b;
		while (div <= lower)
		{
			if (a % div == 0 && b % div == 0)
				hcd = div;
			div++;
		}
		printf("%d", hcd);
	}
	printf("\n");
	return (0);
}