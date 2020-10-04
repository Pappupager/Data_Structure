// ----------------------- Type of Recursion -----------------------
// 3. Tree - if function itself more than one time 
// lect - 39
//


#include<stdio.h>

// Tree recursion function
void func_tree(int n)
{
	if(n>0)
	{
		printf("%d ",n);

		func_tree(n-1);
		func_tree(n-1);
	}
}

// Main function 
int main()
{
	int n = 0;
	printf("Enter any number: ");
	scanf("%d",&n);

	printf("Tree recursion sequence: ");
	func_tree(n);

	return 0;
}
