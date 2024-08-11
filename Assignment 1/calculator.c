#include <stdio.h>

int main(){
    int a1,a2;
    printf("enter the first number: ");
    scanf("%d", &a1);
    printf("enter the second number: ");
    scanf("%d", &a2);
    printf("Addition: %d\n", a1+a2);
    printf("Subtraction: %d\n" ,a1-a2);
    printf("Multiplication: %d\n", a1*a2);
    printf("Division: %.2f\n", (float)a1 / a2); 

    return 0;
}