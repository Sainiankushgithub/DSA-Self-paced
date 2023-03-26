// TWO POINTER APPROACH
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
bool twopointer(int arr[],int n,int x)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x)                                                            // NAVIE SOLUTION : 
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];                                                        // WE HAVE SORTED ARRAY ELEMENTS 
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    int x;
    cout<<"Enter the element to search whether its sum of two element present in array or not\n";
    cin>>x;
    cout<<"Your entered sum present are not : "<<twopointer(arr,n,x);
return 0;
}