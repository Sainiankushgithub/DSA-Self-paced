// UNION OF TWO UNSORTED ARRAY NAIVE SOLUTION
#include<bits/stdc++.h>
using namespace std;
int Unionsort(int a[],int b[],int n,int m)
{
    int res=0;
    int dist[m+n]={};
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            dist[res]=a[i];
            res++;
        }
    }
    for(int i=0;i<m;i++)
    {
        bool flag=false;
        for(int j=0;j<res;j++)
        {
            if(b[i]==dist[j])
            {
            flag=true;
            break;
            }
        }
        if(flag==false)
        {
            dist[res]=b[i];
            res++;
        }
    }
    return res;
}
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,m;
    cout<<"Enter the size of first unsorted array\n";
    cin>>n;
    cout<<"Enter the size of second unsorted array\n";
    cin>>m;
    int a[n],b[m];
    cout<<"Enter the number of elements of first unsorted array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number of elements of second unsorted array\n";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<"Displaying your first array elements\n";
    display(a,n);
    cout<<"Displaying your second array elements\n";
    display(b,m);
    cout<<"Total distinct element in two unsorted array are : "<<Unionsort(a,b,n,m)<<endl;
return 0;
}