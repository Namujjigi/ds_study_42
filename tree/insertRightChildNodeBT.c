#include "bintree.h"

BinTreeNode* insertRightChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element)
{
    BinTreeNode* pReturn;

    if (!pParentNode)
    {
        printf("parent node is empty");
        return (NULL);
    }
    if (pParentNode->pRightChild != NULL)
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
    pParentNode->pRightChild = pReturn;
    return (pParentNode->pRightChild);
}