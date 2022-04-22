
#include "arraylist.h"

void clearArrayList(ArrayList* pList)
{
    int idx;

    idx = -1;
    while (++idx < pList->currentElementCount)
        pList->pElement[idx].data = 0;
}