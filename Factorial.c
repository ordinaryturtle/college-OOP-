#include <stdio.h>

int main() {
    int x,i;
    long long y=1;
    printf("Enter number: ");
    scanf("%d", &x);

    if (x<1) {
        printf("Factorial is not defined for negative numbers");
    }
    else {
        for (i=1;i<=x;i++){
            y*=i;
        }
        printf("Factorial of %d is %llu",x,y);
    }
    return 0;
}