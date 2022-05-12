#include "bintree.h"

BinTreeNode* getRootNodeBT(BinTree* pBinTree)
{
    BinTreeNode* pReturn;

    if (!pBinTree)
    {
        printf("root is empty");
        return (NULL);
    }
    pReturn = pBinTree->pRootNode;
    return (pReturn);
}