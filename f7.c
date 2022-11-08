//7. Write a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)
/* 

nCr = n!/r!(n-r)! 

*/

#include<stdio.h>
int fact1(int);
int fact2(int);
int combination(int, int);

int main()
{
    int num, r, nCr;
    printf("Enter N: ");
    scanf("%d", &num);
    printf("Enter r:");
    scanf("%d", &r);
    
    printf("combination is : ");

    nCr = fact1(num)/fact2(r)*combination(num, r);
    printf("%d", nCr);
}

int fact1(int n /* or r*/)
{
    int i, fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int fact2(int r)
{
    int i, fact=1;
    for(i=1; i<=r; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int combination(int n, int r)
{
    int i, fact=1, res;
    res= n-r;

    for(i=1; i<=res; i++)
    {
        fact=fact*i;
    }
    return fact;
}

