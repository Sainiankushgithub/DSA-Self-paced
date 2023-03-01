// MAXIMUM CONSECUTIVE (1s) IS
#include<bits/stdc++.h>
using namespace std;
void display(bool arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int consecutive(bool arr[],int size)
{
    int count=0,res=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            count++;
            res=max(res,count);
        }
        else{
            count=0;
        }
    }
    return res;
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    bool arr[size];
    cout<<"Enter the numbers of an elements of an array in binary form\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your elements\n";
    display(arr,size);
    cout<<"Maximum consecutive (1s) ones is :"<<consecutive(arr,size);
return 0;
}