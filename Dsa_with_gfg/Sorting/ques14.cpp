// UNION OF TWO SORTED ARRAY
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
void Union(int arr1[],int arr2[],int n1,int n2)
{
    int arr[n1+n2];
    for(int i=0;i<n1;i++)
    {
        arr[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {                                                                 // METHOD 1 : O((n1+n2)*log(n1+n2))
        arr[n1+i]=arr2[i];
    }
    sort(arr,arr+n1+n2);                                            // NAIVE SOLUTION
    for(int i=0;i<n1+n2;i++)
    {
        if(i==0||arr[i]!=arr[i-1])
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
    cout<<"Displaying the Union element in an  array elements\n";
    Union(arr1,arr2,n1,n2);
return 0;
}