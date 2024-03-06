// PRACTICE SET I DAY 1
#include<bits/stdc++.h>
using namespace std;
void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// BUBBLE SORT 
void bubbleSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        cout<<"Number of pass "<<i+1<<endl;
        int issorted=1;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted=0;
            }
        }
        if(issorted)
        {
            break;
        }
    }
}
// SELECTION SORT   FIRST WAY
void SelectionSortI(int *arr,int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int min_ind=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        temp[i]=arr[min_ind];
        arr[min_ind]=INT_MAX;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}
// SELECTION SORT SECOND WAY
void SelectionSortII(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_ind]>arr[j])
            {
                min_ind=j;
            }
        }
        int temp=arr[min_ind];
        arr[min_ind]=arr[i];
        arr[i]=temp;
    }
}
// INSERTION SORT
void InsertionSort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbners of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    // bubbleSort(arr,n);
    // cout<<"Displaying your array through bubble sort\n";
    // display(arr,n);
    // cout<<"Displaying your array through selection sort\n";
    // SelectionSortI(arr,n);
    // display(arr,n);
    /*cout<<"Displaying your array through selection sort\n";
    SelectionSortII(arr,n);
    display(arr,n);*/
    cout<<"Displaying your array through insertion sort \n";
    InsertionSort(arr,n);
    display(arr,n);
return 0;
}