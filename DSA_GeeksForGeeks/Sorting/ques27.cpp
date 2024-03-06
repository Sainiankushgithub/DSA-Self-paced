// CHOCOLATE DISTRIBUTION
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
int chocolate(int arr[],int n,int m)
{
    if(m>n)
    {
        return -1;
    }
     sort(arr,arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=1;i+m-1<n;i++)
    {
        res=min(res,arr[i+m-1]-arr[i]);
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
    int m;
    cout<<"Enter the mth number such that the minimum number of chocolate distributed between the children\n";
    cin>>m;
    cout<<"Minimum chocolate distribution is : "<< chocolate(arr,n,m);
return 0;
}