#include "arraylist.h"
#include <stdio.h>

ArrayListNode* getALElement(ArrayList* pList, int position)
{
    ArrayListNode   *ret;

    if (position > (pList->currentElementCount - 1))
    {
        printf("index out of range\n");
        return (FALSE);
    }
    ret = &(pList->pElement[position]);
    return (ret);
}