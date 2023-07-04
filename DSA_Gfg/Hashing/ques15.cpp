// PAIR WITH GIVEN SUM NAIVE APPROACH 
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
bool Pairgiven(int arr[],int n,int sum)
{
    unordered_set<int>h;
    for(int i=0;i<n;i++)
    {
        if(sum-arr[i]!=h.end())
        {
            return true;
        }
        else
        {
            h.insert(arr[i]);
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    int sum;
    cout<<"Enter the sum to check whether given sum is present in the array or not\n";
    cin>>sum;
    cout<<"Given sum pair is prsent or not : "<<Pairgiven(arr,n,sum);
return 0;
}