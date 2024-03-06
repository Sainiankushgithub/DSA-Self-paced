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
    int count=1;
    for(int i=0;i<size;i++)
    {
         count=1;
         cout<<"Ankush saini"<<endl;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;                                                           // METHOD 1
                i++;
            }
        }
        cout<<arr[i]<<"="<<count;
        cout<<endl;
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