//5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>

void oddnatural(int);
int main()
{
    int num;
    
    printf("Enter n: ");
    scanf("%d", &num);
    oddnatural(num);
}

void oddnatural(int n)
{
    int i;
    printf("odd natural numbers are as follows: \n");
    for(i=1; i<=n; i++)
    {
        printf("%d\n", (2*i)-1);
    }

}