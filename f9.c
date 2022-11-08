//9.Write a function to check whether a given number contains a given digit or not.(TSRS)

#include<stdio.h>
int checkdigit(int, int);

int main()
{
    int a, b, c;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    printf("\nEnter a digit: ");
    scanf("%d", &b);

    c=checkdigit(a, b);
   
}

int checkdigit(int n, int x)
{
    int  i, r, count=1;

    while(n!=0)
    {
       r=n%10;
        if(r==x)
            return printf("present");

        n=n/10;
    }

    
}    
    


