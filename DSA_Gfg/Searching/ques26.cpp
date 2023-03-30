// REPEATED ELEMENT IN AN ARRAY 
// HERE ONLY ONE ELEMENT REPEATS 
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
int repeatele(int arr[],int n)
{
    for(int i=0;i<n-1;i++)                                                  // NAIVE SOLUTION : 
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                return arr[i];
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array \n";                // IN THIS ARRAY ZERO MUST BE PRESENT 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    display(arr,n);
    cout<<"Repeated element is : "<<repeatele(arr,n);
return 0;
}