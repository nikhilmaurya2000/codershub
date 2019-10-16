#include <stdio.h>
#include <stdlib.h>
fact(int n);

void main()
{
    //Factorial of number using recursion........
    int factorial,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    factorial=fact(n);
    printf("\nThe Factorial of %d is %d.",n,factorial);
}

fact(int n)
{
if (n==0)
return (1);
else
return (n*fact(n-1));
}
