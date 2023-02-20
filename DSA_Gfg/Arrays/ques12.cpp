// LEFT REMOVE AN ARRAY BY D
#include<bits/stdc++.h>
using namespace std;
void leftrotateOne(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void leftRotatebyN(int arr[],int n,int d)
{
    for(int i=1;i<d;i++)
    {
        leftrotateOne(arr,n);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Ente the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying the array without any left rotation\n";
    display(arr,n);
    leftrotateOne(arr,n);
    int d;
    cout<<"Enter the number how many left rotation to want to do\n";
    cin>>d;
    leftRotatebyN(arr,n,d);
    cout<<"Displaying the array after some left rotation\n";
    display(arr,n);
return 0;
}