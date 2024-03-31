// LEFT ROTATE AN ARRAY BY ONE
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
void rotatearray(int arr[],int size)
{
    int temp=arr[0];
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
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
    cout<<"Displaying an array without doing the left rotate by one\n";
    display(arr,size);
    rotatearray(arr,size);
    cout<<"Displaying an array with doing the left rotate by one\n";
    display(arr,size);
return 0;
}