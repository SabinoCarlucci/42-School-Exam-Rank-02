/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/lcm

Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (a && b)
	{
		unsigned int num = 0;
		if (a < b)
			num = a;
		else
			num = b;
		while (1)
		{
			if (num % a == 0 && num % b == 0)
				return (num);
			num++;
		}
	}
	else
		return (0);	
}

int main(int argc, char **argv)
{
	if (argc)
		;
	printf("%d", lcm(atoi(argv[1]), atoi(argv[2])));
	return (0);
}