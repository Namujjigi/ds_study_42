#include "bintree.h"

BinTreeNode* getLeftChildNodeBT(BinTreeNode* pNode)
{
    BinTreeNode* pReturn;

    if (!pNode)
    {
        printf("Node is empty");
        return (NULL);
    }
    pReturn = pNode->pLeftChild;
    return (pReturn);
}