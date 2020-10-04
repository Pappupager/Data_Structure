//---------------------- Type of Recursion --------------------------//
// 5. Nested Recursion - recursion inside recursion
// lect -43
//

#include<stdio.h>

// Nested Recursion function
int func_nested(int n )
{
	if(n>10)
		return (n-1);
	else
		return (func_nested(func_nested(n+2)));
}

// main Function
int main()
{
	int n = 0;
	printf("Enter any number: ");
	scanf("%d",&n);

	printf("Nested recursion Sequence: ");
	printf("%d\n",func_nested(n));

	return 0;
}
