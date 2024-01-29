// C program to Demonstrate the
// Multiplication table of a number
#include <stdio.h>
void print_table(int range, int num)
{
    int mul;
    for (int i = 1; i <= range; i++) {
        
       mul = num * i; 
       printf("%d * %d = %d", num, i, mul);
 
      
        printf("\n");
    }
}

int main()
{
    int range ;
    printf("Enter the range :");
    scanf("%d",&num);

    int num ;
    printf("Enter a number:");
    scanf("%d",&num);

    print_table(range, num);
 
    return 0;
}