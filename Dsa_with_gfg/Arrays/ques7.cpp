// REMOVE DUPLICATE FROM SORTED ARRAY
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
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
int removeduplicate(int arr[],int size)
{
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[j++]=arr[i];
        }
    }
    return j;
}
int main()
{
    int arr[]={1,2,3,4,1,2,3,5,6};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Displaying the array before removing the duplicate elements\n";
    display(arr,size);
    sortarray(arr,size);
    cout<<"Displaying the array in sorted form\n";
    display(arr,size);
    int size1=removeduplicate(arr,size);
    cout<<"Displaying the array after removing the duplicate elements\n";
    display(arr,size1);
return 0;
}