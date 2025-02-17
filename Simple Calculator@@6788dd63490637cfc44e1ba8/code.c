#include<stdio.h>

int main() {
    int a, b;
    char c;
    
    // Input two integers and a character operator
    scanf("%d %d %c", &a, &b, &c);

    // Check for the operator and perform the corresponding operation
    if (c == '+') {
        printf("%d", a + b);
    }
    else if (c == '-') {
        printf("%d", a - b);
    }
    else if (c == '/') {
        if (b != 0) {
            printf("%d", a / b);
        } else {
            printf("error");
        }
    }
    else if (c == '*') {
        printf("%d", a * b);
    }
    else {
        printf("error");
    }

    return 0;
}
