#ifndef Queue
#define Queue
#define NULL 0
#include "Tree.h"

typedef struct Qnode {


 struct BinaryTreeNode *front;
 struct BinaryTreeNode *rear;

struct Qnode * next;
};

void create_Q();
void show();
void enqueue(struct BinaryTreeNode *node);
struct QueueNode * dequeue();

#endif
