/*INSERTION OPERATION */
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
void insertion(int arr[], int size, int index , int element)
{
    for(int i=size;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}
int main()
{
    int arr[100];
    int size;
    printf("Enter teh size of an array\n");
    scanf("%d",&size);
    printf("Enter the number of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the array elements\n");
    display(arr,size);
    int index,element;
    printf("Enter the postion where you want to insert the element\n");
    scanf("%d",&index);
    printf("Enter the element you want to insert in that index\n");
    scanf("%d",&element);
    insertion(arr,size,index,element);
    size=size+1;
    printf("Displaying the element after insertion\n");
    display(arr,size);
return 0;
}