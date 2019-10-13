#include<stdio.h>
int fact(int)
int main()
{
        int n,a;
        printf("Enter the number for factorial : ");
        scanf("%d",&n);
        a=fact(n);
        printf("The factorial of the given number is : %d",a);
        return 0;
}

int fact(int n)
{
        if(n>=1)
                return (n*fact(n-1));
        else
                return 1;
}


