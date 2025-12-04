#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	//performing operations on a,b
	printf("a is less than b %d \n",a<b);
	printf("a is greater than b %d \n",a>b);
	printf("a is less than or equal to b %d \n",a<=b);
	printf("a is greater than or equal to b %d \n",a>=b);
}
