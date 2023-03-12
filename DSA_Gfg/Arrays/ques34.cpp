// FIND THE MAXIMUM SUM OF K CONSECUTIVE ELEMENTS
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
int maxSum(int arr[],int n,int k)
{
    int res=INT_MIN;                                              // NAVIE SOLUTION
    int sum=0;                                                    // METHOD 2 : (DSA NAVIE SOLUTION )
    for(int i=0;i+k-1<n;i++)
    {                                                            // TIME COMPL : O(n*k)
        sum=0;                                                   // AUX SPACE : O(1)
        for(int j=0;j<k;j++)
        {
            sum=sum+arr[i+j];
        }
        res=max(res,sum);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your entered elements \n";
    display(arr,n);
    int k;
    cout<<"Enter the kth number to find the maximum consecutive sum\n";
    cin>>k;
    cout<<"Maximum consecutive sum is : "<<maxSum(arr,n,k);
return 0;
}