#include <stdio.h>
#include "graph.h"
#include "parse.h"

int main(void) {
    /*
    int d;
    char c;
    scanf("%c", &c);
    scanf("%d", &d);
    d = isdigit('1');
    printf("%d\n", d);*/
    //onp();
    //printf("%d", isdigit(')'));
    node_t* a[20] = {};
    int i;
    addNode(1, 2);
    addNode(2, 1);
    for (i = 0; i < 20; i++) {
        if (neighbour[i] == NULL) {
            printf("a[%d] = NULL\n", i);
        } else {
            printf("a[%d] is not null\n", i);
        }
    }
    lookForCycle(1);
    return 0;
}
