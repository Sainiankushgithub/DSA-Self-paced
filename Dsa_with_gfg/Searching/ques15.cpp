// SEARCH IN A ROTATED SORTED ARRAY 
#include<bits/stdc++.h>
using namespace std;
int rotatedsorted(int arr[],int n,int ele)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            return i;
        }
    }
    return -1;
}                                                                // NAVIE SOLUTION 
int main()
{
    int arr[]={10,20,30,40,8,9}; // HERE WE HAVE TAKEN A ROTATED SORTED ARRAY
    int n=sizeof(arr)/sizeof(int);
    int ele;
    cout<<"Enter the element to be search\n";
    cin>>ele;
    cout<<"Element at the index : "<<rotatedsorted(arr,n,ele);
return 0;
}