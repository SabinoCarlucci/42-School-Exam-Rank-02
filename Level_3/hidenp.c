/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/hidenp

Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
 */

# include <stdlib.h>
# include <unistd.h>

int main(int argc, char** argv)
{
	if (argc == 3)
	{
		char *s1 = argv[1];
		char *s2 = argv[2];
		int count1 = 0;
		int count2 = 0;

		if (argv[1] == NULL)
			write(1, "1", 1);
		else
		{
			while (s1[count1] && s2[count2])
			{
				if (s1[count1] == s2[count2])
					count1++;
				count2++;
			}
			if (!s1[count1])
				write(1, "1", 1);
			else
				write(1, "0", 1);
		}

	}
	write (1, "\n", 1);
}