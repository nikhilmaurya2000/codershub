#include<stdio.h>
int gcd(int, int);
int lcm(int, int);
int main()
{
	int a,b;
	printf("Enter the two numbers for gcd and lcm : ");
	scanf("%d%d",&a,&b);
	printf("The gcd and lcm of given numbers are respectively %d and %d", gcd(a, b),lcm(a, b));
	return 0;
}

int gcd(int a, int b)
{
	int max,min;
	if(a>b){
		max=a;
		min=b;
	}
	else{
		max=b;
		min=a;
	}
	if(max%min==0)
		return min;
	else
		return gcd(min,max%min);
}

int lcm(int a,int b)
{
	int k;
	k=(a*b)/gcd(a, b);
	return k;
}


