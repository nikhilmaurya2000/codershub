#include<stdio.h>
int main()
{
        int n,count=0;
        printf("Enter the number whose digit to count");
        scanf("%d",&n);
        while(n>0)
        {
                n=n/10;
                count++;
        }
        printf("The number of digits is %d",count);
       return 0;
}


