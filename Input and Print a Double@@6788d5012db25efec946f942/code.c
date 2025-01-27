#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num;
    scanf("%f",&num);
    printf("You entered: %.3f\n",num);
    return 0;
}