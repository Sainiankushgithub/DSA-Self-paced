#include<bits/stdc++.h>
using namespace std;
void grouparr(int arr[],int size,int len)
{
    for(int i=0;i<len;i++)
    {
        int temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;
    }
}
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the number of an elements of an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int len=size/2;
    grouparr(arr,size,len);
    cout<<"Displaying the array elements\n";
    display(arr,size);
return 0;
}