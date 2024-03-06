#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void group(int arr[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the number of an elements of an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying the array elements\n";
    display(arr,size);
return 0;
}