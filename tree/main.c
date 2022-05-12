#include "bintree.h"

void preorder(BinTree *pBinTree)
{
    if (pBinTree != NULL)
    {
        preorderRecursive(pBinTree->pRootNode);
        printf("\n");
    }
}

void preorderRecursive(BinTreeNode *pNode)
{
    if (pNode != NULL)
    {
        printf("%c", pNode->data);
        preorderRecursive(pNode->pLeftChild);
        preorderRecursive(pNode->pRightChild);
    }
}

void inorder(BinTree *pBinTree)
{
    if (pBinTree != NULL)
    {
        inorderRecursive(pBinTree->pRootNode);
        printf("\n");
    }
}

void inorderRecursive(BinTreeNode *pNode)
{
    if (pNode != NULL)
    {
        inorderRecursive(pNode->pLeftChild);
        printf("%c", pNode->data);
        inorderRecursive(pNode->pRightChild);
    }
}

void postorder(BinTree *pBinTree)
{
    if (pBinTree != NULL)
    {
        postorderRecursive(pBinTree->pRootNode);
        printf("\n");
    }
}

void postorderRecursive(BinTreeNode *pNode)
{
    if (pNode != NULL)
    {
        postorderRecursive(pNode->pLeftChild);
        postorderRecursive(pNode->pRightChild);
        printf("%c", pNode->data);
    }
}

int main(){

	BinTree *tree = NULL;
	BinTreeNode node;

	node.data = 'A';
	tree = makeBinTree(node);

	node.data = 'B';
	insertLeftChildNodeBT(tree->pRootNode, node);
	
	node.data = 'C';
	insertRightChildNodeBT(tree->pRootNode, node);
	
	node.data = 'D';
	insertLeftChildNodeBT(tree->pRootNode->pLeftChild, node);

	node.data = 'E';
	insertRightChildNodeBT(tree->pRootNode->pLeftChild, node);

	node.data = 'F';
	insertLeftChildNodeBT(tree->pRootNode->pRightChild, node);

	node.data = 'G';
	insertRightChildNodeBT(tree->pRootNode->pRightChild, node);

	node.data = 'H';
	insertLeftChildNodeBT(tree->pRootNode->pLeftChild->pLeftChild, node);
	
	node.data = 'I';
	insertRightChildNodeBT(tree->pRootNode->pLeftChild->pLeftChild, node);

	node.data = 'J';
	insertLeftChildNodeBT(tree->pRootNode->pLeftChild->pRightChild, node);

	node.data = 'K';
	insertRightChildNodeBT(tree->pRootNode->pRightChild->pLeftChild, node);

	node.data = 'L';
	insertLeftChildNodeBT(tree->pRootNode->pRightChild->pRightChild, node);

	node.data = 'M';
	insertRightChildNodeBT(tree->pRootNode->pRightChild->pRightChild, node);


	
	preorder(tree);
	inorder(tree);
	postorder(tree);
	//deleteBinTree(tree);

}