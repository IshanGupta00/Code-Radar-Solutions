#include<stdio.h>
int main(){
    char ab;
    scanf("%c",&ab);
    if(ab >= 'A' && ab<= 'Z'){
        printf("Uppercase");
    }
    else{
        if(ab >= 'a' && ab<='z'){
            printf("Lowercase");
        }
        else{
            printf("Not an alphabet");
        }
    }
    return 0;
}