#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        f(begin_list->data); // apply function to current node's data
        begin_list = begin_list->next; // advance to next node
    }
}
