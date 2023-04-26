// QUICK SORT ALGORITHM USING LOMUTO PARTITION 
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
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
        arr[i+1]=arr[h];
        arr[h]=temp;
        return (i+1);
}
void quickSort(int arr[],int l,int h)
{
    if(l<h)
    {                                            // THIS ALGORITHM FASETR THAN ANY ALGORITHM 
        int p=lomutoPartition(arr,l,h);          // STABLE ALGORITHM
        quickSort(arr,h,p-1);
        quickSort(arr,p+1,h);
    }
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
    cout<<"Index getting : "<<lomutoPartition(arr,0,n-1)<<endl;
    display(arr,n);
    quickSort(arr,0,n-1);
    cout<<"Displaying your element using quick sort\n";
    display(arr,n);
return 0;
}