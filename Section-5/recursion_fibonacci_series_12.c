//---------------------------- Fibonacci series ------------------------------------//
// lect - 56
//

#include<stdio.h>

// Fibonacci series function
int fib(int n)
{
	if(n <= 1)
		return n;
	else
		return (fib(n-2) + fib(n-1));
}

// series using iterative method
int Ifib(int n)
{
	int a = 0, b = 1, s;

	if(n <= 1)
		return n;
	for(int i =2; i<=n;i++)
	{
		s = a+b;
		a = b;
		b = s ;
	}

	return s;
}

// Memoization - storing the result using array
int Mfib(int n)
{
	
}

// Main Function
int main()
{
	int n = 0;
	printf("Enter the position: ");
	scanf("%d",&n);

	printf("Fibonacci Series using recursion: %d\n",fib(n));

	printf("Fibonacci series using iterative method: %d\n",Ifib(n));

	return 0;
}
