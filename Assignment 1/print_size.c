#include <stdio.h>

int main(){
    int intType;
    char charType;
    float floatType;
    double doubleType;

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of char: %zu bytes\n", sizeof(charType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));

    return 0;
}