// SEGREGATE ZERO'S ONES AND TWO 
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
void segZeroOneTwo(int arr[],int n)
{
    int lo=0,mid=0,hi=n-1;
    while(mid<=hi)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[lo]);
            mid++;
            lo++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[hi]);
            hi--;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the zeroes and in an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    segZeroOneTwo(arr,n);
    cout<<"After segregating the zeroes and ones\n";
    display(arr,n);
return 0;
}