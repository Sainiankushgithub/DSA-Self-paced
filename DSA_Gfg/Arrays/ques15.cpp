//  LEADER ELEMENT IN AN ARRAY
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
void Leaderelement(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        bool flag=false;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers of an elemets\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array before \n";
    display(arr,size);
    cout<<"Displaying the leader elements in an array\n";
    Leaderelement(arr,size);
return 0;
}