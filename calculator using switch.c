#include <stdio.h>

int main () {
    int num1,num2;
    char operator;
    printf("Enter operation amoung following +,-,*,/: \n");
    scanf("%c", &operator);
    
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    switch (operator) {
        case '+': 
            printf("answer:%d", num1+num2);
            break;
        case '-': 
            printf("answer:%d", num1-num2);
            break;
        case '*': 
            printf("answer:%d", num1*num2);
            break;
        case '/': 
            if (num2!=0) {
                printf("answer:%d", num1/num2);
            }
            else {
                printf("Error");
            }
            break;
            
            default: 
                printf("Invalid Operator");
    }
    return 0;
}