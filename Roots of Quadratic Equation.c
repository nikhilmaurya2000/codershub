#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
    //To Calculate roots of Quadratic Equation......
    int a,b,c,root1,root2,D,d;
    printf("Enter the coefficients of Quadratic Equations:");
    scanf("%d,%d,%d",&a,&b,&c);
    D=b*b-4*a*c;
    d=sqrt(D);
    if (D>0)
    {
        printf("\nRoots are real.");
        root1=(-b+d)/(2*a);
        root2=(-b-d)/(2*a);
        printf("\nRoots are %d,%d",root1,root2);
    }
    else
    printf("\nRoots are imaginary.");
}
