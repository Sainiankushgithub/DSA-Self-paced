// SEARCH IN A ROTATED SORTED ARRAY
#include<bits/stdc++.h>
using namespace std;
int rotatedsorted(int arr[],int n,int ele)                            // EFFICIENT SOLUTION : 
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            return mid;
        }
        if(arr[low]<arr[mid])
        {
            if(ele>=arr[low] && ele<arr[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(ele>arr[mid] && ele<=arr[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[]={10,20,30,40,8,9}; // HERE WE HAVE TAKEN A ROTAED SORTED ARRAY
    int n=sizeof(arr)/sizeof(int);
    int ele;
    cout<<"Enter the element to be search\n";
    cin>>ele;
    cout<<"Element at the index : "<<rotatedsorted(arr,n,ele);
return 0;
}