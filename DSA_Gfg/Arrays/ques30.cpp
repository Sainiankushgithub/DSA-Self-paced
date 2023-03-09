// MAJORITY ELEMENT IN AN ARRAY
// IF COUNT GREATER THAN N/2 PRINT ANY INDEX OF THE ELEMENT ,ELSE RETURN -1
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
int majorityelement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
            if(count>n/2)
           {                                                               // METHOD 1 (NAIVE SOLUTION )
            return i;                                                      // TIME COMPLEXCITY O(n^2)
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
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your arrays elements\n";
    display(arr,n);
    cout<<"Majority element situated at the index is : "<<majorityelement(arr,n);
return 0;
}