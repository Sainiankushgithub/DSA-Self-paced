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
    cout<<"Displaying your array through bubble sort\n";
    bubbleSort(arr,n);
    display(arr,n);
    return 0;
}