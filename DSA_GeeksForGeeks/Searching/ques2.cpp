// BINARY SEARCH 
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
int Binarysearch(int arr[],int n,int ele)
{
    int low=0;
    int high=n-1;                                                              // ITERATIVE METHOD : 
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==ele)                                                       // TIME COMPLEXITY : O(LOG n)
        {
            return mid;
        }
        else if(arr[mid]>ele)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elments in a sorted manner\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    int ele;
    cout<<"Enter the element to be search \n";
    cin>>ele;
    cout<<"Element at the index : "<<Binarysearch(arr,n,ele);
return 0;
}