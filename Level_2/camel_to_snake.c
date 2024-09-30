/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%202/camel_to_snake

Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
 */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc)
		;
	int c = 0;
	if (argc > 1)
	{
		while (argv[1][c])
		{
			if (argv[1][c] >= 'A' && argv[1][c] <= 'Z')
				argv[1][c] += ('a' - 'A');
			write(1, &argv[1][c], 1);
			if ((argv[1][c + 1]) >= 'A' && (argv[1][c + 1]) <= 'Z')
				write(1, "_", 1);
			c++;
		}
	}
	write(1, "\n", 1);
	return(0);
}