#include<stdio.h>

int main(){
    int rows, rowIndex, spacesCount, starIndex;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for (rowIndex = 0; rowIndex< rows; rowIndex++) {
        for (spacesCount=rows; spacesCount>0; spacesCount--)
            printf(" ");

        for (starIndex = 0; starIndex < rows; starIndex++) {
            if (rowIndex!=starIndex) {
                printf("*A");
            }
            else {
                printf("* ");
            }
        }
    printf("\n");
    }
    return 0;
}
