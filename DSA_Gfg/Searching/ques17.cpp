// FIND A PEAK ELEMENT
#include<bits/stdc++.h>
using namespace std;
int findpeak(int arr[],int n)
{
    if(n==1)
    {
        return arr[0];
    }
    if(arr[0]>=arr[1])
    {
        return arr[0];
    }
    if(arr[n-1]>=arr[n-2])
    {
        return arr[n-1];
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;               
}
int main()                                    // NAIVE SOLUTION : 
{
    // int arr[]={5,10,20,15,7};                      // LET ASSUME THIS IS OUR ROTATED SORTED ARRAY
    // int arr[]={5,10};
    // int arr[]={10};
    int arr[]={5,10,20,15,7,80}; // HERE MAY BE 80 OR 20 
    int n=sizeof(arr)/sizeof(int);
    cout<<"Peak element in the array is : "<<findpeak(arr,n);
return 0;
}