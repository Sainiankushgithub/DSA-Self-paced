// MAJORITY ELEMENT IN AN ARRAY 
// EFFICIENT :  O(n)
// THIS SOLUTION IS ALSO KNOW AS MOORE'S ALGORITHM 
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
int majorityelement(int arr[],int n)                                             // IF THERE IS NO MAJORITY ELEMENT IN AN ARRAY IT WILL RETURN -1;
{
    int count=1,res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {                                                                   // METHID 2 
            res=i;                                                          // MOORE'S ALGORITHM
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
    }
    if(count<n/2)
    {
        res=-1;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements in an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    display(arr,n);                                                            
    cout<<"Majority element index is "<<majorityelement(arr,n);
return 0;
}