// PRACTICE SET 2 DAY 2
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
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int issorted=1;
        cout<<"Number of pass "<<i+1<<endl;
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
// SELECTION SORT FIRST WAY
void selectionSortI(int arr[],int n)
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
void selectionSortII(int arr[],int n)
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
        int temp=arr[i];
        arr[i]=arr[min_ind];
        arr[min_ind]=temp;
    }

}
// INSERTION SORT 
void insertionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
// MEERGE SORT 
void mergeSort(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1,n2=high-mid;
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
        if(left[i]<=right[i])
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
    cout<<"Enter the numbners of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    /*cout<<"Displaying your array through bubble sort\n";
    bubbleSort(arr,n);
    display(arr,n);*/
    // cout<<"Displaying your array through selection sort\n";
    // selectionSortI(arr,n);
    // display(arr,n);
    /*cout<<"Displaying your array through selection sort\n";
    selectionSortII(arr,n);
    display(arr,n);*/
    // cout<<"Displaying your array through insertion sort\n";
    // insertionSort(arr,n);
    // display(arr,n);
    cout<<"Displaying your array through merge sort\n";
    mergeSort(arr,0,0+n/2,n-1);
    display(arr,n);
    return 0;
}