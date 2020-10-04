//----------------- Type of Recursion ------------------------//
// 2. Head Recursion - operation perform at returning time  
// lect-38
//

#include<stdio.h>

// head recursion 
void func_head(int n)
{
	if(n>0)
	{
		func_head(n-1);
		printf("%d ",n);
	}
}

// Head recursion function using loop
void func_head_loop(int n)
{
	int i = 1 ;
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
}

// Main function
int main()
{
	int n = 0;
	printf("Enter any number: ");
	scanf("%d",&n);

	printf("Head recursion sequence: ");
	func_head(n);

	printf("\nHead recursion using loop: ");
	func_head_loop(n);

	return 0;
}
