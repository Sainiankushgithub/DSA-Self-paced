// MAXIMUM CIRCULAR SUB ARRAY SUM EFFICIENT METHOD 
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
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;                                                            // METHOD 2 
    int arr[n];                                                        // THIS ONE IS NOT DONE YET 
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your arrays elements\n";
    display(arr,n);
return 0;
}
