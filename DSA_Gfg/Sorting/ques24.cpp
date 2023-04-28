// KTH SMALLEST ELEMENT EFFICIENT WAY 
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
int lomutoPartition(int arr[],int l,int h)
{
    int i=l-1;
    int pivot=arr[h];
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
int smallest(int arr[],int n,int k)
{
    int lo=0,hi=n-1;
    while(lo<=hi)
    {
        int p=lomutoPartition(arr,lo,hi);
        if(p==k-1)
        {
            return p;
        }
        else if(p>k-1)
        {
            hi=p-1;
        }
        else
        {
            lo=p+1;
        }
    }
    return -1;
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
    int k;
    cout<<"Enter the number which smallest number you want to find\n";
    cin>>k;
    cout<<"your "<<k<<" smallest number is : "<<smallest(arr,n,k);
    return 0;
}