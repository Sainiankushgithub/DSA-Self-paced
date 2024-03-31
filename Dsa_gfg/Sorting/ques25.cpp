// MINIMUM DIFFERNECE 
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
int minimumdiff(int arr[],int n)
{
    int res=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)                        // NAIVE SOLUTION TO SOLVE THE PROBLEM
        {
            int diff=abs(arr[j]-arr[i]);
            res=min(res,diff);
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
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your entered array elements \n";
    display(arr,n);
    cout<<"Minimum differnce is : "<<minimumdiff(arr,n);
return 0;
}