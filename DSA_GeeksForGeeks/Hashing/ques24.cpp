// LONGEST COMMON SUNARRAY WITH GIVEN SUM -> NAIVE SOLUTION
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
int LongcomSubarray(bool arr1[],bool arr2[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++)
        {
            sum1+=arr1[j];
            sum2+=arr2[j];
            if(sum1==sum2)
            {
                res=max(res,j-i+1);
            }
        }
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    bool arr1[n];
    bool arr2[n];
    cout<<"Enter the number of an elements of array 1\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the number of an elements of array 2\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Displaying your array 1 elements\n";
    display(arr1,n);
    cout<<"Displaying your array 2 elements\n";
    display(arr2,n);
    cout<<"Longest common subarray sum : "<<LongcomSubarray(arr1,arr2,n);
return 0;
}