#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	int b = 20;
	//I tried to see that a+++b operator works like a++ + b or a + ++b
	int c = a+++b;
	printf("a= %d , b= %d , c= %d \n", a, b, c);
	return 0;
}
