#include <stdio.h>

/* Function declaration */
int sumOfDigits(int n);


int main()
{
    int n, sum;
    
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &n);
    
    sum = sumOfDigits(n); // calling function
    
    printf("\nSum of digits of %d = %d\n\n", n, sum);
    
    return 0;
}


/**
 * Recursive function to find sum of digits of a number
 */
int sumOfDigits(int n)
{
    // Base condition
    if(n == 0)
        return 0;
        
    return ((n % 10) + sumOfDigits(n / 10));
}