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
    int c=-1;
    cout<<c<<" ";
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            cout<<arr[i-1]<<" ";               // WRONG     
            continue;;
        }
        else
        {
            for(int j=i-1;j>=0;j--)
            {
                if(arr[i]<arr[j])
                {
                    cout<<arr[j]<<" ";
                    break;
                }
            }
            cout<<c<<" ";
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