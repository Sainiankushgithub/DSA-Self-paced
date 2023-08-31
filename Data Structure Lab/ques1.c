#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,column;
    printf("Enter the size of your row :\n");
    scanf("%d",&row);
    printf("Enter the size of your column:\n");
    scanf("%d",&column);
    int **a;
    a=(int**)malloc(row*sizeof(int*));
    printf("Enter the element of your 2D array:\n");
    for(int i=0;i<row;i++)
    {
        a[i]=(int*)malloc(column*sizeof(int));
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int **b;
    b=(int**)malloc(row*sizeof(int*));
    printf("Enter the second matrix elements :\n");
    for(int i=0;i<row;i++)
    {
        b[i]=(int*)malloc(sizeof(int));
        for(int j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Dispaying your sum of 2D arrays elements :\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d\t",((a[i][j])+(b[i][j])));
        }
        printf("\n");
    }
    return 0;
}
