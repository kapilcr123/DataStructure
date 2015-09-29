#include<stdio.h>
#include<conio.h>
#include "Link_List.h"
#include "Queue.h"
#include "Tree.h"
#define TRUE 1

int main(){
system("cls");
int x,z,x1=10;char y;
struct BinaryTreeNode *new_node,*new_node1;
new_node = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
new_node1 = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->data = 50;


    new_node1->left = NULL;
    new_node1->right = NULL;
    new_node1->data = 80;



system("cls");

printf("Select your Options : \n\n");
printf("1. Link List \n\n");
printf("2. Stack \n\n");
printf("3. Queue \n\n");
printf("4. Tree  \n\n");
printf("5. Exit \n\n");
scanf("%d",&x);
system("cls");
switch(x)
{
case 1:
    z=List_option();
    inserte(10,1);
    inserte(20,2);
    inserte(30,3);
    inserte(40,4);
    display();
    break;
case 2:
    printf("Stack Selected");
    break;
case 3:


    //show();
    //dequeue();
    //show();
    break;
case 4:
    insertTreeNode(new_node);
    show();

    printf("\n");
    insertTreeNode(new_node1);
    show();


break;
case 5:
    return 0;
}
return 0;
}



/*Login function */
void login(){
char user[20],pass[20];
int i;char ch;
printf("Enter Login Credentials : \n");
while(TRUE){
printf("Username : ");
gets(user);
printf("Password : ");
 for(i=0;i<8;i++)
 {
  ch = getch();
  if(ch == 13){break;}
  pass[i] = ch;
  ch = '*' ;
  printf("%c",ch);

 }
 pass[i]='\0';
 printf("\n\n");
if(strcmp(user,"admin")==0 && strcmp(pass,"admin")==0 )
{
    break;
}
else
{
    printf("Please enter valid credentials \n\n");
    continue;
}

}
}
