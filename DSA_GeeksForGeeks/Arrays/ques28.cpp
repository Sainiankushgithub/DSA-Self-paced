// MAXIMUM CIRCULAR SUB ARRAY SUM
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
int maxCirSubarray(int arr[],int n)
{
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+arr[i],arr[i]);                                           // METHOD 1 
        res=max(maxEnding,res);                                                           // NOT ACCURATE NEED OPTIMIZATION 
        maxEnding=res;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your arrays elements\n";
    display(arr,n);
    cout<<"Maximum circular sub array sum is : "<<maxCirSubarray(arr,n);
return 0;
}