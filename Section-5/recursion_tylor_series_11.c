//------------------------- Taylor's series---------------------------//
// lect - 51
//

#include<stdio.h>

// Taylor's series function using recursion
int series(int x, int n)
{
	static int p = 1, f = 1;

	int r;

	if(n == 0)
		return 1;
	else
	{
		r = series(x,n-1);
		p = p*x;
		f = f*n;

		return (r+(p/f));
	}
}

// Taylor's series using Horner's rule
int series_horner(int x, int n)
{
	static int s = 1;

	if(n == 0)
		return s;
	else
	{
		s = (1 + (x/n))*s ;
		return series_horner(x,n-1);
	}
}

// Taylor's series using Iterative method
int Iseries(int x, int n)
{
	int s = 1;

	for(int i=n;i>0 ; i--)
	{
		s = (1+ (x/i))*s ;
	}

	return s;
}


// main Function
int main()
{
	int x =1, n= 0;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter n: ");
	scanf("%d",&n);

	printf("Taylor's Series: %d\n",series(x,n));

	printf("Taylor's series using Horner's Rule: %d\n",series_horner(x,n));

	printf("Taylor's series using iterative method: %d\n",Iseries(x,n));

	return 0;
}
