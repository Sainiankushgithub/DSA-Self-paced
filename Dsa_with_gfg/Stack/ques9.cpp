// EFFICINET SOLUTION  MY SOLUTION 
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
void PrevNearestGreater(int arr[],int n)
{
    stack<int>s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false&&s.top()<=arr[i])
        {
            s.pop();
        }
        if(s.empty()==true)
        {
            s.push(arr[i]);
            cout<<-1<<" ";
        }
        else
        {
            cout<<s.top()<<" ";
            s.push(arr[i]);
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array :\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements :\n";
    display(arr,n);
    PrevNearestGreater(arr,n);
return 0;
}