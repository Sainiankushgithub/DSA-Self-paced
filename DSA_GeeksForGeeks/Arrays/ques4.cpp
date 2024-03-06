// SECOND LARGRST ELEMENT IN AN ARRAY
#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[], int n)
{
    int largest=arr[0];
    int  i,secondlargest;
    for( i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
    }
    return secondlargest;
}
int main()
{
    int arr[]={0,6,7,4,3,2,8};
    secondlargest(arr,6);
    cout<<"Second largst element is "<<secondlargest(arr, 7);
return 0;
}