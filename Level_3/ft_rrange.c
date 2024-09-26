/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/ft_rrange

Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0. */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int range;
	if (start >= end)
		range = start - end + 1;
	else
		range = end - start + 1;
	
	int *point = (int *)malloc(sizeof(int) * range);

	int count = 0;
	while (count < range)
	{
		if (start >= end)
		{
			point[count] = end;
			end++;
			count++;
		}
		else
		{
			point[count] = end;
			end--;
			count++;
		}
	}
	return (point);
}

int main(int argc, char **argv)
{
	if (argc)
		;
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);
	int range;
	if (start >= end)
		range = start - end + 1;
	else
		range = end - start + 1;
	int *point = ft_rrange(start, end);
	int count = 0;
	while (count < range)
	{
		printf("%d\n", *point++);
		count++;
	}
	return (0);
}