#include<stdio.h>

int main(){
    char str[100];
    int n;
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    printf("You entered: %s", str);
    return 0;
}