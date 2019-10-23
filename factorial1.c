#include<stdio.h>
int fact(int)
int main()
{
        int n,b;
        printf("Enter the number for factorial : ");
        scanf("%d",&n);
        b=fact(n);
        printf("The factorial of the given number is : %d",b);
        return 0;
}

int fact(int x)
{
        if(x>=1)
                return (x*fact(x-1));
        else
                return 1;
}


