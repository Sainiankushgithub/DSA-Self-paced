// MAXIMUM SUB ARRAY SUM EFFICIENT WAY  
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int maxSum(int arr[],int n)
{
    int maxEnding=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(maxEnding,res);
    }
    return res;
}
int main()
{                                                          
   int n;
   cout<<"Enter the size of an  array\n";
   cin>>n;
   int arr[n];
   cout<<"Enter the numbers of an elements of an array\n";               // METHOD 3
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   cout<<"Displaying your array elements\n";
   display(arr,n);
   cout<<"max sum is : "<<maxSum(arr,n);
return 0;
}