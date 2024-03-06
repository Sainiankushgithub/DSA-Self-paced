// TWO POINTER TECHNIQUE
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
bool twoPointerTech(int arr[],int n,int x)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
        {
            return true;
        }
        else if(arr[i]+arr[j]>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements in an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    int x;
    cout<<"Enter the element to check whether its sum present or not\n";
    cin>>x;
    cout<<"Sum of the element present or not : "<<twoPointerTech(arr,n,x);
return 0;
}