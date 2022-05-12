#include "bintree.h"

void deleteBinTreeNode(BinTreeNode* pNode)
{
    if (pNode != NULL)
    {
        deleteBinTreeNode(pNode->pLeftChild);
        deleteBinTreeNode(pNode->pRightChild);
        free(pNode);
    }
}