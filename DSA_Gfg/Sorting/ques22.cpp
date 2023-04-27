// QUICKSORT USING HOARE PARTITION
#include<bits/stdc++.h>
using namespace std;
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
    cout<<"Displaying your entered array elements \n";
    display(arr,n);
    cout<<"Index getting : "<<hoarePartition(arr,0,n-1)<<endl;
    display(arr,n);
    quickSort(arr,0,n-1);
    cout<<"Displaying your element using quick sort\n";
    display(arr,n);
return 0;
}