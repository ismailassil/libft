#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list *head = ft_lstnew(ft_strdup("HELLO WORLD!"));
	t_list *second = ft_lstnew(ft_strdup("I'M BACK!"));
	t_list *third = ft_lstnew(ft_strdup("FU** YOU"));
	t_list *current = head;
	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);

	while (current != NULL)
	{
		printf("%s\n", current->content);
		current = current->next;
	}
	printf("%s, %s, %s\n", head->content, head->next->content, head->next->next->content);
	int size = ft_lstsize(head);
	printf("Number of node: %d\n", size);
}