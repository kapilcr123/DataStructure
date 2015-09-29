#include "Tree.h"
#include "Queue.h"
#include "stdio.h"
#include "conio.h"


struct BinaryTreeNode *root=NULL;

int Tree_option(){
int x;
printf("Select your option : \n\n");
printf("1. Search \n\n");
printf("2. Exit \n\n");
scanf("%d",&x);
return x;
}

void insertTreeNode(struct BinaryTreeNode * extranode){
    struct BinaryTreeNode *temp;

    printf("i m in insert function");
create_Q();

if (root == NULL)
{

 root= extranode;

}



else{
temp = root;
enqueue(temp);
while(temp!=NULL){
   // temp = dequeue();
    if(temp->left)
        enqueue(temp->left);
        else break;
    if(temp->right)
        enqueue(temp->right);
        else break;
}
if(!temp->left)
{
    temp->left = extranode;
}
else temp->right = extranode;
}
}

void create(){
    struct BinaryTreeNode *bt1,*bt2,*bt3,*bt4,*bt5,*bt6,*bt7;
    bt1 = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    root = bt1;
    bt2 = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    bt3 = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    bt4 = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    bt5 = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    bt6 = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    bt7 = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    bt1->data = 10;
    bt2->data = 20;
    bt3->data = 30;
    bt4->data = 40;
    bt5->data = 50;
    bt6->data = 60;
    bt7->data = 70;
    bt1->left = bt2;
    bt1->right= bt5;
    bt2->left = bt3;
    bt2->right= bt4;
    bt3->left = NULL;
    bt3->right= NULL;
    bt4->left = NULL;
    bt4->right= NULL;
    bt5->left = bt6;
    bt5->right= bt7;
    bt6->left = NULL;
    bt6->right= NULL;
    bt7->left = NULL;
    bt7->right= NULL;

}
void search(){
int x;
printf("Select your option : \n\n");
printf("1. PreOrder \n\n");
printf("2. InOrder \n\n");
printf("3. PostOrder \n\n");
scanf("%d",&x);
system("cls");
if(x==1){
PreOrder(root);}
else if(x==2)
InOrder(root);
else
PostOrder(root);
}


void PreOrder(struct BinaryTreeNode *root){
    if(root!=NULL){
    printf("%d ",root->data);
    PreOrder(root->left);
    PreOrder(root->right);
    }
    else return;
}

void InOrder(struct BinaryTreeNode *root){
    if(root!=NULL){
    PreOrder(root->left);
    printf("%d",root->data);
    PreOrder(root->right);
    }
    else return;
}

void PostOrder(struct BinaryTreeNode *root){
    if(root!=NULL){
    PreOrder(root->left);
    PreOrder(root->right);
    printf("%d",root->data);
    }
    else return;
}
