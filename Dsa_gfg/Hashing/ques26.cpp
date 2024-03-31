// LONGEST CONSECUTIVE SUBSEQUENCE NAIVE SOLUTION
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
int LongestSub(int arr[],int n)
{
    sort(arr,arr+n);
    int res=1,curr=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
            curr++;
        }
        else if(arr[i]!=arr[i-1])
        {
            res=max(res,curr);
            curr=1;
        }
    }
    return max(res,curr);
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of an elements of array 1\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements : \n";
    display(arr,n);
    cout<<"Longest consecutive subsequence : "<<LongestSub(arr,n)<<endl;
return 0;
}