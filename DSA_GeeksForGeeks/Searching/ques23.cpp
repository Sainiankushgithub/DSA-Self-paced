// MEDIAN OF TWO SORTED ARRAY
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
void combinearray(int arr1[],int arr2[],int n,int temp[])
{
    for(int i=0;i<n;i++)
    {
        temp[2*i]=arr1[i];
        temp[2*i+1]=arr2[i];
    }
}
void sort(int temp[],int n)
{
    for(int i=0;i<n;i++)
    {                                                           // HERE WE DO THE SORTING OF MERGE OF THE TWO ARRAY
        int issorted=1;                                         // BUT THERE IS NO NEED OF SORTING IF WE TAKING THE SORTED ARRAY
        for(int j=0;j<n-i-1;j++)                                // SIMPLY WE HAVE TO  MODIFY THE SOLUTION RATHER THAN  SORTING THE ARRAY
        {
            if(temp[j]>temp[j+1])
            {
                int temp1=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=temp1;
                issorted=0;
            }
        }
        if(issorted)
        {
            return ;
        }
    }
}
float median(int temp[],int n)
{
    float average;
    if(n%2==0)
    {
       average=(float)(temp[n/2-1]+temp[n/2])/2;
       return average;
    }
    else
    {
        return temp[n/2];
    }
}
int main()
{
    int n1,n2;
    cout<<"Enter the size of an array 1 \n";
    cin>>n1;
    cout<<"Enter the size of an array 2 \n";                                       // NAIVE SOLUTION : 
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
    int temp[n1+n2];
    cout<<"Enter the numbers of an elements of an array 1 \n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the numbers of an elements of an array 2 \n";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Displaying your array 1 \n";
    display(arr1,n1);
    cout<<"Displaying your array 2 \n";
    display(arr2,n2);
    combinearray(arr1,arr2,n1+n2,temp);
    cout<<"Displaying your combined array\n";
    display(temp,n1+n2);
    sort(temp,n1+n2);
    cout<<"After sorting your array would be \n";
    display(temp,n1+n2);
    cout<<"median of your array is : "<<median(temp,n1+n2);
    return 0;
}