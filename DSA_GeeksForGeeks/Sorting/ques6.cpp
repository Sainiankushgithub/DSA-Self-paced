// MERGE FUNCTION OF MERGE SORT
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
void merge(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    cout<<"n1="<<n1<<" "<<"n2="<<n2<<endl;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[n1+i];
    }
    cout<<"Displaying your left[]\n";
    display(left,n1);
    cout<<"Displaying your right[]\n";
    display(right,n2);
    int i=0,j=0,k=low;
    while(i<n1&&j<n2)
    {
        if(left[i]<right[j])
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
    cout<<"Displaying your through merge function of merge sort\n";
    merge(arr,0,(0+(n-1))/2,n-1);
    display(arr,n);
return 0;
}