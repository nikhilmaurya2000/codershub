#include<stdio.h>
int main()
{
	int n,r,s=0,temp;
	printf("Enter the number to be reversed : ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("The number has been reversed from %d to %d",temp,s);
	return 0;
}

