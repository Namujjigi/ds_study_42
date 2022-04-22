
#include "arraylist.h"

int removeALElement(ArrayList* pList, int position)
{
    int idx = pList->currentElementCount - 1;
    int cnt = idx - position;

    if (pList->currentElementCount - 1 < position)
        return (FALSE);
    while (cnt--)
    {
        pList->pElement[position] = pList->pElement[position + 1];
        position++;
    }
    pList->currentElementCount -= 1;
    return (TRUE);
}