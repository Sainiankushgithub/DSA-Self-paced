// LEFT ROTATE AN ARRAY BY D 
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;                                               //  METHOD SECOND (2)
}
void leftrotate(int arr[],int size,int  n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=n;i<size;i++)
    {
        arr[i-n]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[size-n+i]=temp[i];
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers of an elemets\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array before any left shift by an array\n";
    display(arr,size);
    int n;
    cout<<"Enter the number for how much left shift you want\n";
    cin>>n;
    leftrotate(arr,size,n);
    cout<<"Displaying your array after some left shift by an array\n";
    display(arr,size);
return 0;
}