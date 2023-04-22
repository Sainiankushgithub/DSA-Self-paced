// COUNT INVERSION OF AN ARRAY
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
int CountInversion(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)                        // e.g arr[]={2,4,1,3,5} here inversion we have (2,1),(4,1),(4,3)
    {                                           //                  SO OUR COUNT BECOME : 3 
        for(int j=i+1;j<n;j++)                  // A PAIR (arr[i],arr[j]) FROMS AN INVERSION WHEN I<J AND arr[i]>arr[j]
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    return count;
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
    cout<<"Total count inversion are : "<<CountInversion(arr,n);
return 0;
}