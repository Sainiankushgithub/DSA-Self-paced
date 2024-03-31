// Count 1s IN A SOTED BINARY ARRAY
#include<bits/stdc++.h>
using namespace std;
void display(bool arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int countocc(bool arr[],int n)
{
   int low=0,high=n-1;
   while(low<=high)
   {
    int mid=(low+high)/2;
    if(arr[mid]<1)
    {
        low=mid+1;
    }
    else
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        {
            return n-mid;
        }
        high=mid-1;
    }
   }
   return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    bool arr[n];
    cout<<"Enter the number of elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    cout<<"Total number of 1  present is : "<<countocc(arr,n)<<" times";
return 0;
}