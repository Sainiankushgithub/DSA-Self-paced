// STOCK SPAN PROBLEM
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
void stockSpan(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int span=1;
        for(int j=i-1;j>=0&&arr[j]<=arr[i];j--)
        {
            span++;
        }
        cout<<span<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array :\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array :\n";
    display(arr,n);
    cout<<"Stock Span :\n";
    stockSpan(arr,n);
return 0;
}