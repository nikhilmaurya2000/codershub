#include<stdio.h>

void main(){

        int number;
        printf("Enter the number : ");
        scanf("%d",&number);
        printf("Factorial is : %d",factorial(number));
}

int factorial(int num){

        if(num>=1 || num != 0)
                return (num*factorial(num-1));
        else
                return 1;
}
