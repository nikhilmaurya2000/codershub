#include<stdio.h>
int main()
{
    int num1,num2,flag;

    printf("program to calculate prime numbers in a given range\n");

    printf("enter first number : ");
    scanf("%d",&num1);

    printf("enter last number : ");
    scanf("%d",&num2);

    printf("the prime numbers between %d and %d are : ",num1,num2);//num1=3,num2=10

    for(int i=num1;i<num2;i++)//i=3,i<3
    {
        for (int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag==0)
            printf("%d ",i);
    }


}

