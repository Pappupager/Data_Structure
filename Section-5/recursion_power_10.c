//------------------------ Power or Exponential Function --------------------------
// lect -49
//

#include<stdio.h>

// power function using recursion
int Rpow(int m, int n)
{
	if (n == 0)
		return 1;
	else
		return(Rpow(m,n-1)*m);
}

// reduce activation record function
int pow(int m, int n)
{
	if(n == 0)
		return 1;
	if(n%2 == 0)
		return pow(m*m,n/2);
	else
		return m*pow(m*m,n/2);
}

int Ipow(int m, int n)
{
	int pow = 1;

	for(int i=n;i>0;i--)
	{
		pow = m*pow;
	}

	return pow;
}

// Main function
int main()
{
	int n = 0,m = 0;
	printf("Enter any number: ");
	scanf("%d",&m);
	printf("Enter power: ");
	scanf("%d",&n);


	printf("Recursion Result: %d\n",Rpow(m,n));
	printf("Reduce activation record Result: %d\n",pow(m,n));
	printf("Iterative Result: %d\n",Ipow(m,n));

	return 0;

}
