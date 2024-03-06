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
void sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int issorted=1;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted=0;
            }
        }
        if(issorted)
        {
            return;
        }
    }
}
int repeatele(int arr[],int n)                                                  // NAIVE SOLUTION : 
{                                                                               // TIME : O(n log n) 
    for(int i=0;i<n;i++)                                                        // SPACE : O(1)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
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
    sort(arr,n);
    cout<<"Displaying your sorted array\n";
    display(arr,n);
    cout<<"Repeated element is : "<<repeatele(arr,n);
return 0;
}