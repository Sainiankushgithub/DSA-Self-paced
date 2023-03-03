// MAXIMUM LENGTH EVEN-ODD SUBARRAY
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
int maxlenEvenOdd(int arr[],int n)
{
    int res=1,count=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0)&&(arr[i-1]%2!=0)||(arr[i]%2!=0)&&(arr[i-1]%2==0))
        {
            count++;                                                  // METHOD 2
            res=max(count,res);
        }
        else 
    {
        count=1;
    }
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements in an arrat\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    cout<<"Maximum length of Even-Odd subarray is : "<<maxlenEvenOdd(arr,n);
return 0;
}