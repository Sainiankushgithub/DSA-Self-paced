// LINEAR SEARCH 
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
int linearsearch(int arr[],int n,int ele)
{
    int i=0;
    while(i<n)
    {
        if(arr[i]==ele)
        {
            return i;
        }
        i++;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elments in a sorted manner\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    int ele;
    cout<<"Enter the element to be search\n";
    cin>>ele;
    cout<<"Element present at the index : "<<linearsearch(arr,n,ele);
    return 0;
}