//
// Created by Marek on 2017-01-22.
//

#include <stdlib.h>
#include "graph.h"

const int N = MAX_N;
int num[MAX_N] = {};
char op[MAX_N] = {};
int state[MAX_N] = {};
int stack[MAX_N]= {};
int top = -1;
int visited[MAX_N] = {};
node_t* neighbour[MAX_N] = {};
int cycleExists = 0;

node_t* createNewNode(int key) {
    node_t* new;
    new = malloc(sizeof(node_t));

    new -> index = key;
    new -> next = NULL;
    return new;
}

int addNode(int from, int to) {
    node_t* newNeighbour = createNewNode(to);
    newNeighbour -> next = neighbour[from];
    neighbour[from] = newNeighbour;
    return 1;
}

void lookForCycle(int i) {
    if (visited[i] == 1) {
        cycleExists = 1;
        printf("Cycle was found\n");
    } else {
        node_t* it = neighbour[i];
        visited[i] = 1;
        while (it != NULL) {
            lookForCycle(it -> index);
            it = it -> next;
        }
        visited[i] = 0;
    }
}

int isStackEmpty() {
    return top == -1;
}

int isStackFull() {
    return top == N;
}

int stackTop() {
    return stack[top];
}

int stackPop() {
    if (!isStackEmpty()) {
        return stack[top--];
    } else {
        printf("Popping from an empty stack\n");
        return -1;
    }
}

int stackPush(int elm) {
    if (!isStackFull()) {
        stack[top++] = elm;
        return 1;
    } else {
        printf("Pushing on a full stack\n");
        return 0;
    }
}
