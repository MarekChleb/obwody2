#include "parse.h"


/**
    TODO
        spacje
        czy to jest liczba czy to jest operator
        łączenie grafów
 */

/*void onp() {
    char a, c, dummy;
    scanf("%c", &c);
    if (c == ' ') {
        scanf("%c", &c);
    }
    if (c == '(') {
        onp();
        scanf("%c%c", &dummy, &a);
        onp();
        scanf("%c", &dummy);
        //eval(a);
        printf("%c ", a);
    } else if (c == '-') {
        onp();
        printf("(-1) ");
        printf("* ");
    } else {
        printf("%c ", c);
    }
}*/

void onp() {
    char a, c, dummy;
    scanf("%c", &c);
    if (c == ' ') {
        scanf("%c", &c);
    }
    if (c == '(') {
        onp();
        scanf("%c%c", &dummy, &a);
        if (a == ' ') {
            a = dummy;
        }
        onp();
        scanf("%c", &dummy);
        //eval(a);
        printf("%c ", a);
    } else if (c == '-') {
        onp();
        printf("(-1) ");
        printf("* ");
    } else if (c == 'x') {
        int index;
        scanf("[%d]", &index);
        printf("x[%d] ", index);
    } else{
        scanf("%c", &dummy);
        if (isdigit(dummy) != 0) {
            int liczba;
            liczba = (c - '0') * 10 + (dummy - '0'); //konwersja chara na int
            printf("%d ", liczba);
        } else {
            printf("%c ", c);
        }
    }
}