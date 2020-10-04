//------------------------------ Pascal Triangle ------------------------------------//
// Combination 
// lect - 58
//


#include<stdio.h>

// combination formula function
int pas(int n, int r)
{
	if(r == 0 || n == r)
		return 1;
	else
		return (pas(n-1,r-1) + pas(n-1,r));
}

// Main Function
int main()
{
	int n, r ;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("enter r: ");
	scanf("%d",&r);

	printf("Pascal triangle: %d\n",	pas(n,r));

	return 0;
}
