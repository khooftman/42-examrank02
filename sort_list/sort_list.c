#include "list.h"
t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *head = lst;     // keep reference to head

    while (lst && lst->next)
    {
        if (!cmp(lst->data, lst->next->data)) // wrong order: swap data
        {
            int tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = head; // restart from beginning
        }
        else 
            lst = lst->next; // correct order: advance
    }
    return (head);
}
