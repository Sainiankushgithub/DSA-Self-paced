// INDEX OF FIRST OCCURENCE USING RECURSION
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }                                                                          // METHOD 2 :  EFFICIENT SOLUTION
    cout<<endl;
}
int Binarysearch(int arr[],int low,int high,int ele)
{                            
    int mid;
    if(low>high)
    {
        return -1;
    }                                                                        // RECURSSIVE METHOD :                                                   
     mid=(low+high)/2;
     if(arr[mid]>ele)
    {
       return Binarysearch(arr,low,mid-1,ele);
    }
    else if(arr[mid]<ele){
      return  Binarysearch(arr,mid+1,high,ele);
    }
    else
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else
        {
            return Binarysearch(arr,low,mid-1,ele);
        }
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
    cout<<"Enter the element to be search\n";
    cin>>ele;
    cout<<"Element present at the index : "<<Binarysearch(arr,0,n-1,ele);
    return 0;
}