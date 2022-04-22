#include "arraylist.h"
#include <stdio.h>

int addALElement(ArrayList* pList, int position, ArrayListNode element)
{
    int cnt = 0;
    int idx = 0;

    if (pList->currentElementCount == pList->maxElementCount)
    {
        printf("array is full\n");
        return (FALSE);
    }
    if (pList->maxElementCount - 1 < position)
    {
        printf("index out of range\n");
        return (FALSE);
    }
    if (pList->currentElementCount > position)
    {
        //index로 접근할거니까 - 1 필요함
        idx = pList->currentElementCount - 1;
        cnt = idx - position;
        for (int i = 0; i < cnt; i++)
        {
            //여기서 뒤에서 부터 짤라오고
            (pList->pElement)[idx + 1] = (pList->pElement)[idx];
            idx -= 1;
        }
        pList->pElement[position] = element;
    }
    else
    {
        pList->pElement[pList->currentElementCount] = element;
    }
    pList->currentElementCount += 1;
    return (TRUE);
}
