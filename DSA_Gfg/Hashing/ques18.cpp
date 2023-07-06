// SUB ARRAY WITH GIVEN SUM EFFCIENT SOLUTIOLN
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
bool SubgivenSum(int arr[],int n,int sum)
{
    unordered_set<int>h;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==sum)
        {
            return true;
        }
        if(h.find(pre_sum-sum)!=h.end())
        {
            return true;
        }
        h.insert(pre_sum);
    }
    return false;
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
    cout<<"Enter the sum to check whether given sum present in it or not\n";
    cin>>sum;
    cout<<"Given sum present or not : "<<SubgivenSum(arr,n,sum)<<endl;
    return 0;
}