#include<stdio.h>
int main()
{
	int num,rem,nnum;

	printf("enter a number");
	scanf("%d",&num);
	
	printf("reverse of the given number is : %d",num);


	while(num!==0)
	{
	rem=num%10;
	nnum=num*10+rem;
	num=num/10;
	}

	printf("reverse of the given number is : %d",nnum);
	
	return 0;
}	
	

