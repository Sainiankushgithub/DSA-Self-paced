// SUM OF ARRAY ELEMENTS USING RECURSION
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
int sumarray(int arr[],int n)
{
    if(n==0)
    {                                 // BASE CASE : 
        return 0;
    }
    return sumarray(arr,n-1)+arr[n-1];
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elemetns of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    cout<<"Sum of your array is : "<<sumarray(arr,n);
return 0;
}