/*DELETION OPERATION*/
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void deletion(int arr[],int size,int position)
{
    for(int i=position;i<size;i++)
    {
        arr[i]=arr[i+1];
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
    printf("Displaying the array entered elements\n");
    display(arr,size);
    int position;
    printf("Enter the position from where you want to delete an element\n");
    scanf("%d",&position);
    deletion(arr,size,position);
    size=size-1;
    printf("Displaying the elements after deletion\n");
    display(arr,size);
return 0;
}