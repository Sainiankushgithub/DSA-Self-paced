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
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            return mid;
        }
        if(arr[mid]>ele)
        {
            high--;
        }
        if(arr[mid]<ele)
        {
            low++;
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