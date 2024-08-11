#include<stdio.h>

const double pi = 3.14159265359;
int main() {
    float radius;
    double area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = radius*pi;
    printf("The area of circle is %.11f unit squares\n", area);

    return 0;
}