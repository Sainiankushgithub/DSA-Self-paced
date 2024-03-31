// INTERSECTION OF TWO SORTED ARRAY
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
void Intersection(int arr1[],int arr2[],int n1,int n2)
{
    int arr[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr[k++]=arr2[j++];
    }
    for(int i=0;i<n1+n2;i++)                                         // MY SECOND METHOD : 
    {
       if(arr[i]==arr[i-1] && arr[i]!=arr[i+1])
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int n1,n2;
    cout<<"Enter the size of an array 1\n";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the number of an elements of  array 1\n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of an array 2\n";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the number of an elements of  array 2\n";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Displaying your array 1 elements\n";
    display(arr1,n1);
    cout<<"Displaying your array 2 elements\n";
    display(arr2,n2);
    cout<<"Displaying your common element in an array\n";
    Intersection(arr1,arr2,n1,n2);
return 0;
}