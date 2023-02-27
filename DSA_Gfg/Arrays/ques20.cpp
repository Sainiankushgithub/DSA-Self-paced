// FREQUIENCES OF AN ELEMENT IN A SORTED ARRAY
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
void freq(int arr[],int size)
{
    int i=1,freq=1;
    while(i<size)
    {
        freq=1;
        cout<<"Ankush saini"<<endl;
        while(i<size && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;                                    //METHOD 2
        i++;
    }
    if(size==1||arr[size-1]!=arr[size-2])
    {
        cout<<arr[size-1]<<"="<<1;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers of an elements in an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your entered elements\n";
    display(arr,size);
    cout<<"Displaying the frequnies of your sorted array elements\n";
    freq(arr,size);
return 0;
}