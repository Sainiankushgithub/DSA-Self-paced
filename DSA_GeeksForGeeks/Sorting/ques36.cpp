// MAXIMUM GUESTS 
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
int maxGuest(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,curr=1,res=1;
    while(i<n&&j<n)
    {
        if(arr[i]<=dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res=max(res,curr);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    int dep[n];
    cout<<"Enter the Ariving time  an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Depature time  an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>dep[i];
    }
    cout<<"Displaying your Ariving array Time\n";
    display(arr,n);
    cout<<"Displaying your Depature array Time\n";
    display(dep,n);
    cout<<"Maximum guest meet : "<<maxGuest(arr,dep,n);
return 0;
}