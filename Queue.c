#include "Queue.h"
#include "Tree.h"


struct Qnode *Q;

void create_Q()
{
Q = (struct Qnode *)malloc(sizeof(struct Qnode));
Q->front=NULL;
Q->rear=NULL;
}

void enqueue(struct BinaryTreeNode *i_node)
{

   if(!Q->front && !Q->rear)
   {
       Q->front=i_node;
       Q->rear=i_node;
   }

    else
    {

        Q->next = i_node;
        Q->rear=i_node;

    }

}


void show()
{

struct Qnode *temp;

temp= Qnode->front;

 while(!temp)
 {

     printf("%d",temp->front->data);
     temp=temp->next;

 }

}

/*
struct QueueNode * dequeue(){
struct QueueNode *temp;
temp = (struct QueueNode *)malloc(sizeof(struct QueueNode));
temp = front;
front = front->next;
return temp;
}

void show(){
struct QueueNode *temp;
temp = (struct QueueNode *)malloc(sizeof(struct QueueNode));
temp = front;
while(temp!=NULL){
    printf("  %d  ",temp->data);
    temp = temp->next;
    }
}

*/


