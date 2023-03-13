// WINDOW SLIDING TECHNIQUE TO COMPITUTE THE 
// MAXIMUM SUM OF KTH NUMBERS OF AN ELEMENTS 
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
int WindSlidTech(int arr[],int n,int k)
{
    int  sum =0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    int res=sum;
    for(int i=k;i<n;i++)
    {
        sum=sum+arr[i]-arr[i-k];
        res=max(res,sum);
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
    display(arr,n);
    int k;
    cout<<"Enter the kth element to find the maximum consecutive sum \n";
    cin>>k;
    cout<<"Maximum sum is : "<< WindSlidTech(arr,n,k);
return 0;
}