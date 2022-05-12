#ifndef _BIN_TREE_
#define _BIN_TREE_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BinTreeNodeType
{
	char data;
	// int visited;

	struct BinTreeNodeType* pLeftChild;
	struct BinTreeNodeType* pRightChild;
} BinTreeNode;

typedef struct BinTreeType
{
	struct BinTreeNodeType* pRootNode;
} BinTree;

BinTree* makeBinTree(BinTreeNode rootNode);
BinTreeNode* getRootNodeBT(BinTree* pBinTree);
BinTreeNode* insertLeftChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element);
BinTreeNode* insertRightChildNodeBT(BinTreeNode* pParentNode, BinTreeNode element);
BinTreeNode* getLeftChildNodeBT(BinTreeNode* pNode);
BinTreeNode* getRightChildNodeBT(BinTreeNode* pNode);
void deleteBinTree(BinTree* pBinTree);
void deleteBinTreeNode(BinTreeNode* pNode);

void preorder(BinTree *pBinTree);
void preorderRecursive(BinTreeNode *pNode);
void inorder(BinTree *pBinTree);
void inorderRecursive(BinTreeNode *pNode);
void postorder(BinTree *pBinTree);
void postorderRecursive(BinTreeNode *pNode);

#endif

#ifndef _COMMON_TREE_DEF_
#define _COMMON_TREE_DEF_

#define TRUE		1
#define FALSE		0

#endif