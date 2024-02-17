// BINARY SEARCH REVISION CODE 
#include<bits/stdc++.h>
using namespace std;
int IterativeBinary(int arr[],int low,int high,int ele)
{
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==ele)
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

int RecursiveBinary(int arr[],int low,int high,int ele)
{
    int mid=(low+high)/2;
    if(low<high)
    {
        return -1;
    }
    if(arr[mid]==ele)
    {
        return mid;
    }
    else if(arr[mid]>ele)
    {
        return RecursiveBinary(arr,low,mid-1,ele);
    }
    else
    {
        return RecursiveBinary(arr,mid+1,high,ele);
    }
}
int main()
{
    int arr[]={2,4,6,7,9,11,21,34,43,45};
    int size=sizeof(arr)/sizeof(int);

    // ITERATIVE APPROACH FOR THE BINARY SEARCH 
    int index=IterativeBinary(arr,0,size,7);
    cout<<"Iterative : Element at index "<<index<<"\n";

    // RECURSIVE APPROACH FOR THE BINARY SEARCH 

    int index2=RecursiveBinary(arr,0,size,5);
    cout<<"Recursive : Element at Index "<<index2<<"\n";
return 0;
}