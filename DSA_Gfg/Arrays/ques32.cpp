// MINIMUM GROUP FLIP TO MAKE SAME 
#include<bits/stdc++.h>
using namespace std;
void display(bool arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void minFlip(bool arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<"From "<<i<<" to ";
            }
            else
            {
                cout<<i-1<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0])
    {
        cout<<n-1;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    bool arr[n];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your arrays elements\n";
    display(arr,n);
    minFlip(arr,n);
    return 0;
}