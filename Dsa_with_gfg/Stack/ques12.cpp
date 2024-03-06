// NEXT NERAREST GREATOR ELEMENT NAIVE SOLUTION
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
void NextNearestGreater(int arr[],int n)
{
    stack<int>st;
    for(int i=0;i<n;i++) {
        while(!st.empty() && arr[i]>st.top()) {
            cout<<arr[i]<< " ";
            st.pop();
        }
        st.push(arr[i]);                               // FAIL IT SOME CASES : 
    }    
    while(!st.empty()){
        cout<< -1<< " ";
        st.pop();
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
    NextNearestGreater(arr,n);
return 0;
}