// MERGE SORT
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
void mergeSort(int arr[],int l,int r)
{
    if(r>l)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge_(arr,l,m,r);
    }                                 // error NO MATCHING FUNCTION CALL TO merge 
}
void merge_(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=low;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
    while(j<n2)
    {
        arr[k++]=right[j++];
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your entered array\n";
    display(arr,n);
    cout<<"Displaying your through merge sort\n";
    mergeSort(arr,0,n-1);
return 0;
}