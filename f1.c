//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float);

int main()
{
    float radius, a;
    printf("Enter radius: ");
    scanf("%f", &radius);

    a = area(radius);
    printf("Area is : %f", a);
    return 0;
}

float area(float r)
{
    return 3.14*r*r;

}