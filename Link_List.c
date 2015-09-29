#include "Link_List.h"
struct LinkListNode *start=NULL;

int List_option(){
int x;
printf("Select your choice : \n\n");
printf("1. Insert \n\n");
printf("2. Visit \n\n");
printf("3. Search \n\n");
printf("4. Delete \n\n");
printf("5. Return to main menu \n\n");
scanf("%d",&x);
return x;
}

void inserte(int info,int position){
    struct LinkListNode *new_node,*p,*q;
    int k=1;
    new_node = (struct LinkListNode *)malloc(sizeof(struct LinkListNode));
    new_node->data=info;
p=start;
if(start==NULL)
{
    start=new_node;
    new_node->next=NULL;
}

else if(position==1)
{
new_node->next=start;
start=new_node;
}
else{
while(p!=NULL && k<position){
k++;
q=p;
p=p->next;
}
q->next=new_node;
new_node->next=p;
}
}

void display()
{
    printf("Your required Link List is : \n");
    while(start!=NULL)
    {
        printf("%d ->",start->data);
        start=start->next;
    }
    printf("NULL");
    return;
}
