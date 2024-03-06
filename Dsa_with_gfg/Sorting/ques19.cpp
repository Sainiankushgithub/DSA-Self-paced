// LOUMTO PARTITION
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
int loumtoPartition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {                                            // IN LOUMTO PARTITION PIVOT ALWAYS BE A LAST INDEX  
            i++;
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
        int temp=arr[i+1];
        arr[i+1]=arr[h];
        arr[h]=temp;
        return (i+1);
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
    cout<<"Loumto index at : "<<loumtoPartition(arr,0,n-1)<<endl;
    display(arr,n);
return 0;
}