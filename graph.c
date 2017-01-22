//
// Created by Marek on 2017-01-22.
//

#include "graph.h"

const int N = MAX_N;
int num[MAX_N] = {};
char op[MAX_N] = {};
int state[MAX_N] = {};
int stack[MAX_N]= {};
int top = -1;

extern int isStackEmpty() {
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
