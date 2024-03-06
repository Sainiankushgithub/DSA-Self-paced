// MAXIMUM LENGTH EVEN-ODD SUBARRAY 
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int MaxlenOddEven(int arr[],int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)                                        // METHOD 1
        {
            if((arr[j]%2==0)&&(arr[j-1]%2!=0)||(arr[j]%2!=0)&&(arr[j-1]%2==0))
            {
                count++;
            }
            else
            {
                break;
            }
        }
        res=max(res,count);
    }
    return res;
}
int main()
{                                                          
   int n;
   cout<<"Enter the size of an  array\n";
   cin>>n;
   int arr[n];
   cout<<"Enter the numbers of an elements of an array\n";                     
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   cout<<"Displaying your array\n";
   display(arr,n);
   cout<<"Maximum length even-odd  is : "<<MaxlenOddEven(arr,n);
return 0;
}