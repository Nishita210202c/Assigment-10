/*6. Write a function to calculate the factorial of a number. (TSRS)*/




#include<stdio.h>
int factorial(int);

int main()
{
    int result, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is : ", num);
    result=factorial(num);
    printf("%d", result);

}

int factorial(int n)
{
    int i, fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}