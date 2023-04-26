// HOARE PARATITION
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
int hoarePartition(int arr[],int l,int h)
{
    int i=l-1,j=h+1;
    int pivot=arr[l];
    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);                              // HOARE'S PARTITION IS BETTER ONLY IN LESS COMPARSION AS COMPARED TO LOUMTO PARTITION
        if(i>=j)                                             // NOT STABLE ALGORITHM
        {
            return j;
        }
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
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
    cout<<"Displaying your entered array elements \n";
    display(arr,n);
    cout<<"Idex getting using hoare's partition : "<<hoarePartition(arr,0,n-1)<<endl;
    cout<<"Array changes using hoare's partition \n";
    display(arr,n);
return 0;
}