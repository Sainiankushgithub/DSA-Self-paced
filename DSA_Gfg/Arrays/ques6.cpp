// CHECK IF AN ARRAY IS SORTED 
#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    issorted(arr,size);
    cout<<"Array is sorted or not ---->  "<<issorted(arr,size);
return 0;
}