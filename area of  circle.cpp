#include<stdio.h>
int main ()
{
	int radius;
	printf("enter the value r radius : ");
	scanf("%d",&radius);
	int area=3.14*radius*radius;
	int circumference=2*3.14*radius;
	printf("\narea value : %d",area);
	printf("\ncircumference value : %d",circumference);
	return 0;                                   
}
