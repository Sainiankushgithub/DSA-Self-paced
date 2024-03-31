// LONGEST COMMON SUNARRAY WITH GIVEN SUM -> EFFICIENT SOLUTION
#include<bits/stdc++.h>
using namespace std;
void display(bool arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int LongcomSubarray(bool arr1[],bool arr2[],int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=arr1[i]-arr2[i];
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    bool arr1[n];
    bool arr2[n];
    cout<<"Enter the number of an elements of array 1\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the number of an elements of array 2\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Displaying your array 1 elements\n";
    display(arr1,n);
    cout<<"Displaying your array 2 elements\n";
    display(arr2,n);
    cout<<"Longest common subarray sum : "<<LongcomSubarray(arr1,arr2,n);
return 0;
}