// SUB ARRAY WITH GIVEN SUM 
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
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {                                                                  // METHOD 2 : (EFFICIENT SOLUTION )
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
return 0;
}