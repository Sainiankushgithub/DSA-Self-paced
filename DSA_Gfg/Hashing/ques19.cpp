// LONGEST SUBARRAY WITH GIVEN SUM NAIVE SOLUTION
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
int longsubarray(int arr[],int n,int sum)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum+=arr[j];
            if(curr_sum==sum)
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
    int arr[n];
    cout<<"Enter the number of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    int sum;
    cout<<"Enter the sum to check  given sum present wiht maximum length \n";
    cin>>sum;
    cout<<"Given sum maximum length is  : "<<longsubarray(arr,n,sum)<<endl;
return 0;
}