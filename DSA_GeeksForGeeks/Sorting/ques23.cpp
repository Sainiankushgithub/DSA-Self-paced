// KTH SMALLEST ELEMENT
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
int smallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return(arr[k-1]);
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your entered array elements \n";
    display(arr,n);
    int k;
    cout<<"Enter the number which smallest number you want to find\n";
    cin>>k;
    cout<<"your "<<k<<" smallest number is : "<<smallest(arr,n,k);
return 0;
}