// QUICKSORT USING HOARE PARTITION
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
int hoarePartition(int arr[],int l,int h)
{
    int i=l-1,j=h+1;
    int pivot=arr[h];
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j)
        {
            return j;
        }
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void QuickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=hoarePartition(arr,l,h);
        QuickSort(arr,l,p);
        QuickSort(arr,p+1,h);
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
    QuickSort(arr,0,n-1);
    cout<<"Displaying your after quick sort\n";
    display(arr,n);
return 0;
}