// ALLOCATE MINIMUM NUMBERS OF PAGE 
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
int minPage(int arr[],int n,int k)
{
    if(k==1)
    {
        return sum(arr,0,n-1);
    }
    if(n==1)
    {
        return arr[0];
    }
    int res=INT_MAX;
    for(int i=1;i<n;i++)
    {
        res=min(res,max(minPage(arr,i,k-1),sum(arr,i,n-1)));
    }
    return res;
}
int sum(int arr[],int a,int b)
{
    int s=0;
    for(int i=a;i<=b;i++)
    {
        s+=arr[i];
    }
    return s;
}
int main()
{
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Displaying your entered array\n";
    display(arr,n);
    int k;
    cout<<"Enter the number between how many people you to distribute the\n";
    cin>>k;
    cout<<"Minumum page allocate to the student is : "<<minPage(arr,n,k);
return 0;
}