
#include "arraylist.h"

int isArrayListFull(ArrayList* pList)
{
    return (pList->currentElementCount == pList->maxElementCount);
}
