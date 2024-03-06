// SEGREGATE THE ZEROES  ONE'S  AND TWO
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
void segZeroOneTwo(int arr[],int n)
{
    int temp[n];
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        {
            temp[i++]=arr[j];
        }
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]==1)
        {                                     // NAIVE SOLUTION : FOUR TRAVERSAL 
            temp[i++]=arr[j];                 // TIME : THETA (n)
        }                                     // AUX SPACE : THETA (n)
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]==2)
        {
            temp[i++]=arr[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the zeroes and in an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    segZeroOneTwo(arr,n);
    cout<<"After segregating the zeroes and ones\n";
    display(arr,n);
return 0;
}