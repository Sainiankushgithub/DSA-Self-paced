// SORT IN STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of elements of an arary\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements in increasign order\n";
    sort(arr,arr+n);                                                      // SORTING IN STL
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Displaying your array elements in decreasing order\n";
    sort(arr,arr+n, greater <int>() );
    for(int x :arr)
    {
        cout<<x<<" ";
    }
return 0;
}