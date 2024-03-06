// LEADER ELEMENT IN AN ARRAY
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
void leaderelements(int arr[],int size)
{
    int current_element=arr[size-1];
    cout<<current_element<<" ";
    for(int i=size-2;i>=0;i--)
    {
        if(current_element<arr[i])
        {
            current_element=arr[i];
            cout<<current_element<<" ";
        }
    }
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
    cout<<"Displaying the array elemets before getting any leader elements\n";
    display(arr,size);
    cout<<"Displaying your leader elements\n";
    leaderelements(arr,size);
return 0;
}