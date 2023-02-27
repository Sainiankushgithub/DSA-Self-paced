// MAXIMUM DIFFERNCE
/*Maximum value of arr[j]-arr[i]*/
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
int maximumdiff(int arr[],int size)
{
    int res=arr[1]-arr[0];
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            res=max(res,(arr[j]-arr[i]));
        }
    }
    return res;
}
int main()
{
    int size;                                                                      // METHOD 1
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
    cout<<"Displaying maximum difference elements "<< maximumdiff(arr,size);;
    return 0;
}