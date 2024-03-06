// SEARCH IN AN INFINTE SORTED ARRAY
#include<bits/stdc++.h>
using namespace std;
int infinitesorted(int arr[],int ele)
{
    int i=0;
    while(true)
    {
        if(arr[i]==ele)
        {
            return i;
        }
        if(arr[i]>ele)
        {                                                                    // METHOD 1 : NAIVE SOLUTION 
            return -1;
        }
        i++;
    }
}
int main()
{
    int arr[]={1,10,20,25,34,45,56,67,78,89,100}; // LET ASSUME THIS IS AN INFINITE SORTED ARRAY AND WE DON'T KNOW THE SIZE
    int ele;
    cout<<"Enter the element to be search\n";
    cin>>ele;
    cout<<"Element present at the index : "<<infinitesorted(arr,ele);
return 0;
}