// --------------------------------- Factorial --------------------------//
// lect - 47
//

#include<stdio.h>

// factorial function using recursion
int Rfact(int n)
{
	if(n == 0)
		return 1;
	else
		return (Rfact(n-1)*n);
}

// factorial function using iterative method
int Ifact(int n)
{
	int fact = 1;
	
	for(int i=1; i<=n; i++)
		fact = fact*i;
	
	return fact;
}

// Main function
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);

	printf("Recursion factorial: %d\n",Rfact(n));

	printf("Iterative factorial: %d\n",Ifact(n));

	return 0;
}
