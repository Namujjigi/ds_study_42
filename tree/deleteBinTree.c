#include "bintree.h"

void deleteBinTree(BinTree* pBinTree)
{
    if (pBinTree != NULL)
    {
        deleteBinTreeNode(pBinTree->pRootNode);
        free(pBinTree);
    }
}