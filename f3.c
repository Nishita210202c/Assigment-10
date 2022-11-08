//3. Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)

#include<stdio.h>
int evenodd(int);

int main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);

    result=evenodd(num);
    printf("%d", result);

    return 0;


}

int evenodd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}