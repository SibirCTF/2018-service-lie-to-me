#include <stdio.h>
int main(int argc, char* argv[]) {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a*a - b*b/4);
    return 0;
} 
