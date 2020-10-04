// ------------------------- Sum of nautral number ---------------------------//
//  lect - 45
//


#include<stdio.h>

// sum function using recursion
int Rsum(int n)
{
	if(n==0)
		return 0;
	else
		return (Rsum(n-1)+n) ;
}

// sum function using iterative method
int Isum(int n )
{
	int sum = 0;
	for(int i=1; i<=n ; i++)
	{
		sum = sum + i ;
	}

	return sum ;
}

// main function
int main()
{
	int n;
	printf("enter any number: ");
	scanf("%d",&n);

	printf("Sum using recursion: %d\n",Rsum(n));
	printf("Sum using iterative: %d\n",Isum(n));

	return 0;
	
}
