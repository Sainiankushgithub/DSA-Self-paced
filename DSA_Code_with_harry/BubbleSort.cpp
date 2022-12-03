#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
/*BUBBLE SORT IN SIMPLE WAY*/
void bubblesort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
/*BUBBLE SORT IN MORE EFFICIENT  WAY*/
void bubblesortadaptive(int arr[],int size)
{
    int issorted=0;
    for(int i=0;i<size;i++)
    {
        printf("Number of pass = %d\n",i+1);
        issorted=1;
        for(int j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted=0;
            }
        }
        if(issorted)
        {
            return;
        }
    }
}
int main()
{
    int arr[100];
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the number of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying your entered elements\n");
    printarray(arr,size);
    printf("Printing the element in sorting order (BUBBLE SORT)\n");
    bubblesort(arr,size);
    printarray(arr,size);
    printf("Printing the elements in sorting order (BUBBLE SORT ADAPTIVE ORDER)\n");
    bubblesortadaptive(arr,size);
    printarray(arr,size);
return 0;
}