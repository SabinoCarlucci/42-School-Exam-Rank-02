/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/blob/main/Level%203/ft_range/README.md

Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
 */

# include <stdlib.h>
# include <stdio.h>

int     *ft_range(int start, int end)
{
	int range = 0;
	if ((end - start) >= 0)
		range = (end - start + 1);
	else
		range = -1 * (end - start) + 1;
	
	int *point = (int *)malloc(sizeof(int) * range);

	int count = 0;
	while (count < range)
	{
		if (start < end)
		{
			point[count] = start;
			start++;
			count++;
		}
		else
		{
			point[count] = start;
			start--;
			count++;
		}
	}
	return (point);
}

int main (int argc, char **argv)
{
	if (argc)
		;
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);
	int *point = ft_range(start, end);
	int range = 0;
	if ((end -  start) >= 0)
		range = (end - start + 1);
	else
		range = -1 * (end - start) + 1;
	while (range > 0)
	{
		printf("%d\n", *point++);
		range--;
	}
	return (0);
}