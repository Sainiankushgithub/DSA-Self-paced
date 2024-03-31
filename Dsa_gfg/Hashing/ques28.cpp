// COUNT DISTINCT ELEMENT IN EVERY WINDOW
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
void distele(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<k;j++)
        {
            bool flag=false;
            for(int p=0;p<j;p++)
            {
                if(arr[i+j]==arr[i+p])
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)
                {
                    count++;
                }
        }
        cout<<count<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of an elements of array 1\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements : \n";
    display(arr,n);
    int k;
    cout<<"Enter the window size : \n";
    cin>>k;
    cout<<"Distinct element : ";
    distele(arr,n,k);
return 0;
}