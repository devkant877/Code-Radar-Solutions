#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a , b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        Printf("True/n");
    } else {
        Printf("False/n");
    }

    return 0;
}