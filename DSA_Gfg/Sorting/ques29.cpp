// SEGREGATE POSITIVE AND NEGATIVE 
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
void segPosNeg(int arr[],int n)
{
    int temp[n];
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
            temp[i++]=arr[j];
        }
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]>=0)
        {
            temp[i++]=arr[j];
        }                                                                 // ORDER OF ELEMENT DOESN'T MATTER HERE WE JUST HAVE TO SEGEGATE THE NEGATIVE ELEMENT FIRST THAN POSITIVE
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];                                                   // NAIVE SOLUTION : 
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
    cout<<"Displaying your array elements\n";
    display(arr,n);
    segPosNeg(arr,n);
    cout<<"After Segregating the positive and negative elements our array become\n";
    display(arr,n);
return 0;
}