// SEGREGATE THE ZEROES AND ONE'S 
#include<bits/stdc++.h>
using namespace std;
void display(bool arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void segZeroOne(bool arr[],int n)
{
    int i=-1;
    int j=n;
    while(true)
    {
        do{
            i++;
        }while(arr[i]==0);
        do
        {                                 // EFFICIENT WAY THROUGH HOARE'S PARTITION
            j--;
        } while (arr[j]!=0);
        if(i>=j)
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
    bool arr[n];
    cout<<"Enter the zeroes and in an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    segZeroOne(arr,n);
    cout<<"After segregating the zeroes and ones\n";
    display(arr,n);
return 0;
}