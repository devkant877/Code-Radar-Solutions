#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float q=(a+b+c)/3;
    printf("Average: %.2f",q);
    return 0;
}