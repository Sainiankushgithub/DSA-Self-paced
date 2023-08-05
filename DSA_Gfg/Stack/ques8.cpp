// PREVIOUS NERAREST ELEMENT 
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
void NearestGreater(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[i]<arr[j])
            {
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1)
        {
            cout<<-1<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array :\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements :\n";
    display(arr,n);
    NearestGreater(arr,n);
return 0;
}