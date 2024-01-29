// C program to find factorial of a number using function and loop
#include <stdio.h>
unsigned int factorial(unsigned int n)
{
    int result = 1, i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
 
    return result;
}
int main()
{
    int num ;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}