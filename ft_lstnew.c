#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *p;

    p = (t_list *)malloc(sizeof(t_list));
    if(!p)
        return(NULL);
    (*p).content = content;
    (*p).next = NULL;
    return(p);
}

// #include <stdio.h>
// int main(void)

// {
//     int num1 = 10;
//     int num2 = 20;
//     int num3 = 30;

//     t_list *list1 = ft_lstnew(&num1);
//     t_list *list2 = ft_lstnew(&num2);
//     t_list *list3 = ft_lstnew(&num3);

//     printf("Contents of the list:\n");
//     printf("list1 content: %d\n", *(int *)((*list1).content));
//     printf("list2 content: %d\n", *(int *)((*list2).content));
//     printf("list3 content: %d\n", *(int *)((*list3).content));

//     free(list1);
//     free(list2);
//     free(list3);

//     return(0);
// }