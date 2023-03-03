// MAXIMUM SUB ARRAY SUM 
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    int res=arr[0];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
               sum+=arr[k];
            }
            res=max(res,sum);
        }
    }
    cout<<"Maximum sum is "<<res;
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your sub array elements\n";
    display(arr,size);
return 0;
}