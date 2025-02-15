#include<stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a >= 0 && b >= 0) {  // Both a and b are non-negative
        printf("False");
    } else {  // If either a or b is negative
        printf("True");
    }

    return 0;
}