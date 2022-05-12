#include "bintree.h"

BinTreeNode* insertLeftChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element)
{
    BinTreeNode* pReturn;

    if (!pParentNode)
    {
        printf("parent node is empty");
        return (NULL);
    }
    if (pParentNode->pLeftChild != NULL)
    {
        printf("parent node already has leftchild");
        return (NULL);
    }
    pReturn = (BinTreeNode *)malloc(sizeof(BinTreeNode));
    if (!pReturn)
    {
        printf("malloc failed");
        return (NULL);
    }
    pReturn->data = element.data;
    pReturn->pRightChild = NULL;
    pReturn->pLeftChild = NULL;
    pParentNode->pLeftChild = pReturn;
    return (pParentNode->pLeftChild);
}