// MAXIMUM SUB ARRAY SUM THROUHG TWO LOOPS 
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            res=max(res,sum);
        }                                      // METHOD 2
    }
    cout<<res;
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
    cout<<"Displaying the maximum sub array sum : ";
    display(arr,n);
return 0;
}