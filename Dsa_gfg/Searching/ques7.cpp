// INDEX OF LAST OCCURENCE IN SORTED ARRAY  USING ITERATIVE METHOD
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }                                                                          // METHOD 1 :  EFFICIENT SOLUTION
    cout<<endl;
}
int Binarysearch(int arr[],int n,int low,int high,int ele)
{         
    int mid;                   
    while(low<=high)
    {
        cout<<"Ankush saini "<<endl;
        mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            if(arr[mid+1]!=arr[mid]||mid==n-1)
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
        else{
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
    cout<<"Enter the element to be search\n";
    cin>>ele;
    cout<<"\nElement present at the index : "<<Binarysearch(arr,n,0,n-1,ele);
    return 0;
}