// LONGEST SUBARRAY WITH GIVEN SUM WITH MAXIMUM LENGTH -> EFFICIENT SOLUTION
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
    unordered_map<int,int>m;
    int pre_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==sum)
        {
            res=i+1;
        }
        if(m.find(pre_sum)==m.end())
        {
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum-sum)!=m.end())
        {
            res=max(res,i-m[pre_sum-sum]);
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