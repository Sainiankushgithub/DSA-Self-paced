// LONGEST CONSECUTIVE SUBSEQUENCE EFFICIENT SOLUTION
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
    unordered_set<int>h(arr,arr+n);
    int res=1;
    for(auto x:h)
    {
        if(h.find(x-1)==h.end())
        {
            int curr=1;
            while(h.find(x+curr)!=h.end())
            {
                curr++;
            }
            res=max(res,curr);
        }
    }
    return res;
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