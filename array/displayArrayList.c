
#include "arraylist.h"
#include <stdio.h>

void displayArrayList(ArrayList* pList)
{
    int idx;

    idx = -1;
    while (++idx < pList->currentElementCount)
        printf("pElement[%d]: %d\n", idx, pList->pElement[idx].data);
}