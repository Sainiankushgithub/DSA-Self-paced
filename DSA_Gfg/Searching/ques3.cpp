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
int Binarysearch(int arr[],int ele,int low,int high)
{
    int mid;
    if(low>high)
    {
        return -1;
    }                                                                        // RECURSSIVE METHOD : 
    else{                                                                    // TIME COMPLEXITY : O(log n)
         mid=(low+high)/2;
    }
    if(arr[mid]==ele)
    {
        return mid;
    }
    else if(arr[mid]>ele)
    {
       return Binarysearch(arr,ele,low,high-1);
    }
    else{
      return  Binarysearch(arr,ele,low+1,high);
    }
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
    cout<<"Element at the index : "<<Binarysearch(arr,ele,0,n-1);
return 0;
}