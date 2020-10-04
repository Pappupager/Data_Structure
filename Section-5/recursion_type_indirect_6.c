//---------------------- Type of Recursion ------------------------------//
// 4. Indirect Recursion - one function calling another function
// lect -41
//

#include<stdio.h>

// Indirect recursion function
void func_B(int n)
{
	if(n>0)
	{
		printf("%d ",n);

		func_A(n/2);
	}
}

// Another Function
void func_A(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		func_B(n);
	}
}


// Main function
int main()
{
	int n = 0;
	printf("Enter any number: ");
	scanf("%d",&n);

	printf("Indirect Recursion sequence: ");
	func_B(n);

	return 0;
}
