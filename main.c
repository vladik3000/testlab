#include <stdio.h>


int main() {
    int a;
    int b;
    scanf("%d\n%d", &a, &b);
    if (a == 1 && b == 2){
        printf("whoops\n");
    }
    else {
        printf("%d\n%d\n", a, b);
    }
    return 0;
}
