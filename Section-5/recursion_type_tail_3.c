// ------------------- Type of Recursion -----------------------------//
// 1. Tail Recursion - statement call at last
// lect - 37
//

#include<stdio.h>

// Tail recursion function
void func_tail(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		func_tail(n-1);
	}
}

// Tail recursion function using loop
void func_loop_tail(int n)
{
	while(n>0)
	{
		printf("%d ",n);
		n--;
	}
}

// Main function 
int main()
{
	int n = 0;
	printf("Enter any number: ");
	scanf("%d",&n);

	printf("Tail Recursion sequence: ");
	func_tail(n);

	printf("\nTail recursion using loop : ");
	func_loop_tail(n);

	return 0;
}
