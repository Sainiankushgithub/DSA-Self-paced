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
    int rs=0;
    for(int i=0;i<n;i++)
    {
        rs+=arr[i];
    }
    int ls=0;
    for(int i=0;i<n;i++)
    {
        rs-=arr[i];
        if(ls==rs)
        {
            return true;
        }
        ls+=arr[i];
    }
    return false;
}
int main()
{
     int n;
    cout<<"Enter the size of an array\n";                                         // METHOD 2 : 
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array\n";                       // EFFICIENT SOLUTION : TIME : THETA(n)     AUX SPACE : O(1)
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    cout<<"Equilibrium point exist in the array or not : "<<EquiPoint(arr,n);
return 0;
}