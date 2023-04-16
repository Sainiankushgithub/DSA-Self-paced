// SELECTION SORT NAIVE IMPLEMENTATION
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
void selectionSort(int *arr,int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int min_ind=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {                                                    // Find out the minimum element put it on the first index and so on
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
int main()
{
    int n;
    cout<<"Enter the size of an array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array before any selection sort\n";
    display(arr,n);
    cout<<"Displaying your array after selection sort\n";
    selectionSort(arr,n);
    display(arr,n);
return 0;
}