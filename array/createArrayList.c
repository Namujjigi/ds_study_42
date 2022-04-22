
#include "arraylist.h"
#include <stdlib.h>

ArrayList   *createArrayList(int maxElementCount)
{
    ArrayList       *ret;
    ArrayListNode   *node;
    
    ret = malloc(sizeof(ArrayList));
    ret->maxElementCount = maxElementCount;
    ret->currentElementCount = 0;
    node = malloc(sizeof(ArrayListNode) * maxElementCount);
    ret->pElement = node;
    return (ret);
}