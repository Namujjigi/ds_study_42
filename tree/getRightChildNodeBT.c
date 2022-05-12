#include "bintree.h"

BinTreeNode* getRightChildNodeBT(BinTreeNode* pNode)
{
    BinTreeNode* pReturn;

    if (!pNode)
    {
        printf("Node is empty");
        return (NULL);
    }
    pReturn = pNode->pRightChild;
    return (pReturn);
}