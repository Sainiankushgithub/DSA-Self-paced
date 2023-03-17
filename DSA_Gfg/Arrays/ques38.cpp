// PREFIX SUM 
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int getsum(int arr[],int n,int l,int r)
{
    int curr=0;
    for(int i=l;i<=r;i++)
    {
        curr+=arr[i];
    }
    return curr;                                                 // NOT CORRRECT DIDN'T GOT FROM DSA
}
int main()
{                                                                     // METHOD 1 : 
     int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    int l,r;
    cout<<"Enter the starting index of the array\n";
    cin>>l;
    cout<<"Enter the last index of an array\n";
    cin>>r;
    cout<<"sum is : "<<getsum(arr,n,l,r);
return 0;
}