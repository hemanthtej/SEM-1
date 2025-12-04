#include<stdio.h>

int main(){
	int a;
	int b;
	printf("\nenter the value of a :");
	scanf("%d",&a);
	printf("\nenter the value of b : ");
	scanf("%d",&b);
	int sum=a+b;
	printf("\n sum of %d and %d :%d",a,b,sum);
	int subtraction=a-b;
	printf("\nsubtraction of %d and %d : %d",a,b,subtraction);
	int multiplication=a*b;
	printf("\nmultiplication of %d and %d : %d",a,b,multiplication);
	int quotient=a/b;
	printf("\nquotinet of %d and %d : %d",a,b,quotient);
	int remainder=a%b;
	printf("\nremainder when divided %d by %d : %d",a,b,remainder);
	return 0;
}
	

