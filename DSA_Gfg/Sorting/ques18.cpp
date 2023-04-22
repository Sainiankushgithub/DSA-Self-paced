// PARTITION OF AN ARRAY
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
void partition(int arr[],int low,int high,int p)
{
    int index=0;
    int temp[high+1-low];
    for(int i=low;i<=high;i++)
    {
        if(arr[p]>=arr[i])
        {
            temp[index++]=arr[i];
        }
    }
        for(int i=low;i<=high;i++)
        {
            if(arr[p]<arr[i])
            {
                temp[index++]=arr[i];
            }
        }
        for(int i=low;i<=high;i++)
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
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    int p;
    cout<<"Enter the number to do partition according to that index\n";
    cin>>p;
    partition(arr,0,n-1,p);
    cout<<"Displaying your array after partition\n";
    display(arr,n);
return 0;
}