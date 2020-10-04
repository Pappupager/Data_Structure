// ------------------ Static and global var in recursion ---------------//
// lect 36
//

#include<stdio.h>

int g = 0;

int fun(int x)
{
	// static int s = 0;

	if(x>0)
	{
		// local variable
		// return (fun(x-1)+x) ; 
		
		// static variable
		g++;
		return(fun(x-1)+g);

	}

	return 0;
}

int main()
{
	int a = 5;

	printf("%d\n", fun(a));

	return 0;
}

