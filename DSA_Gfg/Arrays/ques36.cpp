// SUB ARRAY WITH GIVEN SUM 
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
bool givensum(int arr[],int n, int sum1)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum==sum1)
            {
                return true;
                break;
            }
        }
    }
    return false;
}
int main()
{
     int n;                                                                 // MY SOLUTION 
    cout<<"Enter the size of an array\n";                                   // METHOD 1 : MY NAVIE APPROACH TO FIND OUT 
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];                      // TAKING INPUT OF ALL POSITIVE INTEGER 
    }
    cout<<"Displaying your arrays elements are  \n";
    display(arr,n);
    cout<<"Enter the given sum \n";
    int sum;
    cin>>sum;
    cout<<"Given sum is presented in array are or not : "<<givensum(arr,n,sum);
return 0;
}