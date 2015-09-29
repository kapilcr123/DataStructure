#ifndef Link_List
#define Link_List
#define NULL 0
typedef struct LinkListNode{
int data;
struct LinkListNode *next;
};


void inserte(int,int);
void display();
#endif
