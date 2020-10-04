//------------------ How recursion func calls ----------- //
// Lect 34
//

#include<stdio.h>

// Ascending order function calls
void fun1(int y)
{
	if(y>0)
	{
		fun1(y-1);
		printf("%d ",y);
	}
}

// Descending order function calls
void fun2(int y)
{
	if(y>0)
	{
		printf("%d ",y);
		fun2(y-1);
	}
}	

int main()
{
	int x = 3;

	printf("\n Ascending order: ");
	fun1(x);
	
	printf("\n Descending order: ");
	fun2(x);

	return 0;

}


