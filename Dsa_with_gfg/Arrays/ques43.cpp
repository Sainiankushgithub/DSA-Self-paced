// MERGE TWO SORTED ARRAY
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" }\n";
}
void merging(int arr1[],int arr2[],int n1,int n2,int merge[])
{
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]>arr2[j])
        {
            merge[k++]=arr2[j++];
        }
        else
        {
            merge[k++]=arr1[i++];
        }
    }
    while(i<n1)
    {
        merge[k++]=arr1[i++];
    }
    while(j<n2)
    {
        merge[k++]=arr2[j++];
    }
}
int main()
{
    int n1,n2;
    cout<<"Enter the size of an array 1\n";
    cin>>n1;
    cout<<"Enter the size of an array 2\n";
    cin>>n2;
    int arr1[n1],arr2[n2];
    int merge[n1+n2];
    cout<<"Enter the numbers of an element of an array 1 \n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"\nEnter the numbers of an element of an array 1 \n";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"\nDisplaying the array 1 \n";
    cout<<"arr1={ ";
    display(arr1,n1);
    cout<<"\nDisplaying the array 2 \n";
    cout<<"arr2={ ";
    display(arr2,n2);
    merging(arr1,arr2,n1,n2,merge);
    cout<<"\nDisplaying the merging element of two sorted array\n";
    cout<<"merge = { ";
    display(merge,n1+n2);
return 0;
}