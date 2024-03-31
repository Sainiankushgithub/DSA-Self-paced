// SEGREGATE EVEN AND ODD ELEMENTS 
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
void segEveOdd(int arr[],int n)
{
    int i=-1;
    int j=n;
    while(true)
    {
        do{
            i++;
        }while(arr[i]%2==0);
        do{
            j--;
        }while(arr[j]%2!=0);
        if(i>=j)                              // EFFICIENT WAY TO SEGREGATE EVEN AND ODD ELEMENTS
        {
            return ;
        }
        swap(arr[i],arr[j]);
    }
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
    cout<<"Displaying your array\n";
    display(arr,n);
    segEveOdd(arr,n);
    cout<<"Dispalying your array element in way that even element come first and than odd element\n";
    display(arr,n);
return 0;
}