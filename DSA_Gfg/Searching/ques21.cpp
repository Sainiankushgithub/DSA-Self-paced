// TRIPLET IN A SORTED ARRAY 
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
bool tripletsum(int arr[],int n,int x)
{
    for(int i=0;i<n-2;i++)                                                    // METHOD 1 : 
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int n;                                                                         // NAIVE SOLUTION : 
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an array elements\n"; 
    for(int i=0;i<n;i++)
    {                                                                                      
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    int x;
    cout<<"Enter the sum to check whether its triplet sum present or not\n";
    cin>>x;
    cout<<"Tripllet sum present are not : "<<tripletsum(arr,n,x);
return 0;
}