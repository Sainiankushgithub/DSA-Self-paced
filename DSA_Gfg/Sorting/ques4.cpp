// SELECTION SORT IN PLACE IMPLEMENTFATION 
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
    for(int i=0;i<n-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        int temp=arr[min_ind];
        arr[min_ind]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an aray\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numners of an elements of an aray\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    cout<<"Displaying your array after selection sort\n";
    selectionSort(arr,n);
    display(arr,n);
return 0;
}