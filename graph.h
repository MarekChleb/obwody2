#ifndef PROJECT_GRAPH2_H
#define PROJECT_GRAPH2_H

#include <stdio.h>

#define MAX_N 40



typedef struct node {
    int index;
    struct node* next;
} node_t;

node_t* neighbour[MAX_N];

node_t* createNewNode(int key);

void lookForCycle(int i);

int addNode(int from, int to);

int isStackEmpty();

int isStackFull();

int stackTop();

int stackPop();

int stackPush(int elm);

#endif //PROJECT_GRAPH2_H
