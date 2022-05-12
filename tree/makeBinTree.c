#include "bintree.h"

BinTree* makeBinTree(BinTreeNode rootNode)
{
    BinTree *pReturn;
    BinTreeNode *node;

    pReturn = malloc(sizeof(BinTree));
    if (pReturn != NULL)
    {
        node = (BinTreeNode *)malloc(sizeof(BinTreeNode));
        if (node != NULL)
        {
            node->data = rootNode.data;
            node->pLeftChild = NULL;
            node->pRightChild = NULL;
            pReturn->pRootNode = node;
        }
    }
    else
        printf("error, memory allocation fail");
    return (pReturn);
}