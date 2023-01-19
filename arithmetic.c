#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	c=a+b;
	printf("Addition of %d and %d is %d",a,b,c);
	
	//subtraction part:
	c=a-b;
	printf("Subtraction of %d and %d is %d",a,b,c);
	
	return 0;
}
