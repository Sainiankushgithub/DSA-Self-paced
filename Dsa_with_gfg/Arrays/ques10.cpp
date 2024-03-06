// MOVE ALL ZERO TO END WITH EFFICIENT WAY
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
void move(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[count];
            arr[count]=arr[i];
            arr[i]=temp;
            count++;
        }
    }
}
int main()
{
                                    // THIS THE EFFICIENT WAY
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your before shifting the zeroes\n";
    display(arr,size);
    cout<<"Displaying your before shifting the zeroes\n";
    move(arr,size);
    display(arr,size);
return 0;
}