#include<stdio.h>
int main()
{
        int a,r,s=0,t;
        printf("Enter the number to be reversed");
        scanf("%d",&a);
        t=a;
        while(a>0){
                r=a%10;
                s=s*10+r;
                a=a/10;}
        printf("The number is reversed %d to %d",t,s);
        return 0;
}

