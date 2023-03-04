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
int main()
{                                                          
   int n;
   cout<<"Enter the size of an  array\n";
   cin>>n;
   int arr[n];
   cout<<"Enter the numbers of an elements of an array\n";               
   for(int i=0;i>n;i++)
   {
    cin>>arr[i];
   }
   display(arr,n);
return 0;
}