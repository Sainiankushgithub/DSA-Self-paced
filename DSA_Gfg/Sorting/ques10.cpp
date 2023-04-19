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
    int result[n1+n2];
    for(int i=0;i<n1;i++)
    {
        result[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        result[n1+i]=arr2[i];
    }
    sort(result,result+n1+n2);
    for(int i=1;i<n1+n2-1;i++)
    {
        if(result[i]==result[i-1] && result[i]!=result[i+1])
        {
            cout<<result[i]<<" ";
        }
    }
    if(result[n1+n2-1]==result[n1+n2-2])
    {
        cout<<result[n1+n2-1]<<" ";
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