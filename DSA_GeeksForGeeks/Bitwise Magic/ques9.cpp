#include<bits/stdc++.h>
using namespace std;
/*NAIVE SOLUTION TO FIND THE TWO OCCURING ELEMENTS*/
void twoodd(int arr[],int n)
{
    cout<<"ODD occuring elements are\n";
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count%2!=0)
        {
            cout<<arr[i]<<endl;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers of an elements in an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    twoodd(arr,n);
return 0;
}