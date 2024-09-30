/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%202/alpha_mirror

Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------
 
Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.
 
'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'
 
and so on.
 
Case is not changed.
 
If the number of arguments is not 1, display only a newline.
 
Examples:
 
$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
 */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int count = 0;
		while(argv[1][count])
		{
			if(argv[1][count] >= 'A' && argv[1][count] <= 'Z')
			{
				if (argv[1][count] <= 'M')
					argv[1][count] += (('M' - argv[1][count]) * 2) + 1;
				else
					argv[1][count] -= ((argv[1][count] - 'N') * 2) - 1;
			}
			else if(argv[1][count] >= 'a' && argv[1][count] <= 'z')
			{
				if (argv[1][count] <= 'm')
					argv[1][count] += (('m' - argv[1][count]) * 2) + 1;
				else
					argv[1][count] -= ((argv[1][count] - 'n') * 2) + 1;
			}
			write(1, &argv[1][count], 1);
			count++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}