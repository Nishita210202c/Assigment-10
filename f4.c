//4. Write a function to print first N natural numbers (TSRN)

#include<stdio.h>
void natural_num(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    natural_num(num);


}

void natural_num(int n)
{
    int i;
    printf("\nNatural numbers till %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        
        printf("%d\n", i);
    }
}