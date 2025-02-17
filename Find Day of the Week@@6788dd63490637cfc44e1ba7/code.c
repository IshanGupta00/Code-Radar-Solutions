#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1 : print("Monday\n");
                 break;
        case 2 : print("Tuesday\n");
                 break;
        case 3 : print("Wednesday\n");
                 break;   
        case 4 : print("Thursday\n");
                 break;
        case 5 : print("Friday\n");
                 break;
        case 6 : print("Saturday\n");
                 break;
        case 7 : print("Sunday\n");
                 break;                                        
    }
    return 0;
}