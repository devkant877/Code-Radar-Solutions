#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int c= a & ~(1 << b);
    printf("%d", c);
    return 0;
}