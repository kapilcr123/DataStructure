#ifndef Tree
#define Tree
#define NULL 0
typedef struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};


void insertTreeNode(struct BinaryTreeNode * extranode);
void create();
void PreOrder(struct BinaryTreeNode *root);
void InOrder(struct BinaryTreeNode *root);
void PostOrder(struct BinaryTreeNode *root);

#endif
