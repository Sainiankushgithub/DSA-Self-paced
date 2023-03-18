// EQULIBRIUM POINT 
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool EquiPoint(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int ls=0,rs=0;
        for(int j=0;j<i;j++)
        {
            ls+=arr[j];
        }
        for(int k=i+1;k<n;k++)
        {
            rs+=arr[k];
        }
        if(ls==rs)
        {
            return true;
        }
    }
    return false;
}
int main()
{
     int n;
    cout<<"Enter the size of an array\n";                                         // METHOD 1 : 
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    cout<<"Any Equilibrium point in an array or not : "<<EquiPoint(arr,n);
return 0;
}