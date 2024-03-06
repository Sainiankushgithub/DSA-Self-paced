// LINEAR SEARCH 
#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i+1;
            break;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout<<"Enter size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers of an elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the number to be searched\n";
    cin>>element;
    linearsearch(arr,size,element);
    cout<<"Element found "<<linearsearch(arr,size,element);
return 0;
}