/*8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)  */
//nPr= n!/(n-r)!
#include <stdio.h>
#include <conio.h>
long double fact(int);
long npr(int, int);

int main() 
{
	int n , r, ncr( int , int);
	long npr( int , int);
	long double fact( int);
	printf(" Enter value of n & r \n");
	scanf("%d %d",&n , &r);

	if( n>= r) 
    {
		printf(" %dP%d  is %ld", n,r,npr( n, r));
	} 
    else
    {
		printf("WRONG INPUT?? enter the correct input");
	}
}

long double fact( int p) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}

long npr( int n , int r) {
	return( fact( n) / fact( n- r));
}

