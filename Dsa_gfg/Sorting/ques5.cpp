// INSERTION SORT 
#include<bits/stdc++.h>
using namespace std;
void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void InsertionSort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0&&arr[j]>key)                     //      THIS SORTING ALGORITHM IS STABLE BUT BECOME UNSTABLE IF WE PUT arr[j]>=key 
        {                                           // EXAMPLE 20 5 40 60 10 5 WITH THIS 5 AT THE END GOING TO STORE AT THE FIRST INDEX RATHER 
            arr[j+1]=arr[j];                        // TO STORE AT THE SECOND INDEX WHICH LEADS TO LOSE WITH STABILITY IF WE ARRANGED AN DATA IN
            j--;                                    // ALPHABITICAL ORDER
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an aray\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numners of an elements of an aray\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array\n";
    display(arr,n);
    cout<<"Displaying your array after selection sort\n";
    InsertionSort(arr,n);
    display(arr,n);
return 0;
}