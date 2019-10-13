#include<stdio.h>
int main()
{
	int n,r=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		r++;
	}
	printf("The number of digits is %d",r);
	return 0;
}
