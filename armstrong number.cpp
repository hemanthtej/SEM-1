#include <stdio.h>

int main()
{
    int rem, sum, num,number;
  printf("Enter a 3-digit number: ");
    scanf("%d", &num);
number =num;
    while (number != 0)
    {
        rem = number % 10;
        sum = sum + (rem * rem * rem);
        number = number / 10;
    }

    printf("Sum of cubes of digits is %d\n", sum);

    if (number == sum){
        printf("The number is an Armstrong number.\n");}
    else
        printf("The number is not an Armstrong number.\n");
}

