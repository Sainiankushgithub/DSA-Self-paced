// SEARCH IN AN INFINTE SORTED ARRAY
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int ele,int low,int high)
{
    while(low<=high)
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
int infinte(int arr[],int ele)
{                                                                               // EFFICIENT SOLUTION : 
    if(arr[0]==ele)                                               // THIS IS ALSO KNOWN AS UNBOUNDED ALGORITHM
    {
        return 0;
    }
    int i=1;
    while(arr[i]<ele)
    {
        i=i*2;
    }
    if(arr[i]==ele)
    {
            return i;
    }
    return binarysearch(arr,ele,i/2+1,i-1);
}
int main()
{
    // LET ASSUMME THIS IS OUR INFINTE SORTED ARRAY
    int arr[]={2,12,23,34,45,56,67,78,89,90,101,123,234,345};
    int ele;
    cout<<"Enter the element to be search\n";
    cin>>ele;
    cout<<"Your element at the index is : "<<infinte(arr,ele);
return 0;
}