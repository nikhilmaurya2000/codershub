# include <stdio.h>
int fibonacci (int); 
int main(void)
{
	int n, i;
	printf ("Enter the number of terms:\n");
	scanf ("%d", &n);
	printf ("The first %d Fibonacci numbers are \n", n);
    fibonacci(n); // printing the first n Fibonacci numbers

	return (0);
}
int fibonacci (int n)
{
	int a=0, b=1,sum;
    
        for(int i=0;i<n;i++){
            printf("%d\n",a);
            sum=a+b;
            a=b;
            b=sum;
    }
	
}
