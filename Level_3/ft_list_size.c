/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/tree/main/Level%203/ft_list_size

Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

 */
# include "ft_list.h"
# include <stdio.h>
# include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int count = 0;

	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

int main (int argc, char **argv)
{
	t_list *uno = (t_list *)malloc(sizeof(t_list));
	t_list *due = (t_list *)malloc(sizeof(t_list));
	t_list *tre = (t_list *)malloc(sizeof(t_list));
	/* int aaa = 3;
	int bbb = 1;
	int ccc = 1; */
	if (argc)
		;
	if (argv)
		;
	
	/* uno->data = &aaa;
	due->data = &bbb;
	tre->data = &ccc; */

	uno->data = NULL;
	due->data = NULL;
	tre->data = NULL;

	uno->next = due;
	due->next = tre;
	tre->next = NULL;
	printf("%d", ft_list_size(uno));
	free(uno);
    free(due);
    free(tre);
	return (0);
}