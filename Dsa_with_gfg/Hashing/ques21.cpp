//  LONGEST SUBARRAY WITH EQUAL 0s and 1s NAIVE SOLUTION
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
int LonSubArray(bool arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int c0=0,c1=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
            {
                c0++;
            }
            else
            {
                c1++;
            }
            if(c0==c1)
            {
                res=max(res,c0+c1);
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
    bool arr[n];
    cout<<"Enter the number of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    cout<<"Longest sub array with 0s and 1s is : "<<LonSubArray(arr,n)<<endl;
return 0;
}