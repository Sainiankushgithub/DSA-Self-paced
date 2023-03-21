// COUNT OCCURENCE IN SORTED ARRAY
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
int firstocc(int arr[],int n,int ele)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            if(mid==0||arr[mid-1]!=arr[mid])
            {
                return mid;
            }
            else
            {
                high=mid-1;
            }
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
int lastocc(int arr[],int n,int ele)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            if(mid==n-1||arr[mid+1]!=arr[mid])
            {
                return mid;
            }
            else
            {
                low=mid+1;
            }
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
int countocc(int arr[],int n, int ele)
{
   int first=firstocc(arr,n,ele);
   if(first==-1)
   {
    return 0;
   }
   return lastocc(arr,n,ele)-first+1;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    int ele;
    cout<<"Enter the element to be count\n";
    cin>>ele;
    firstocc(arr,n,ele);
    lastocc(arr,n,ele);
    cout<<"Total number of your element present is : "<<countocc(arr,n,ele)<<" times";
return 0;
}