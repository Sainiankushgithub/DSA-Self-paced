// REPEATED ELEMENT PART II 
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {                                                      // THERE IS ONLY ONE REPEATING ELEMENT IN AN ARRAY
        cout<<arr[i]<<" ";                                 // ELEMENT SHOULD BE 1<= MAX(ARR)<=N-1
    }
    cout<<endl;
}              // THIS IS AN ALGORITHM 
int repeatEle(int arr[],int n)
{
    int slow=arr[0],fast=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);               // TILL THIS IS PHASE ONE 
    // PHASE II STARTS FROM HERE
     slow=arr[0];
    while(slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of an elements  : \n";          // ENTERED NUMBER SHOULD BE SIMILLARLY LIKE THIS -- {1,3,2,4,6,5,7,3}
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your entered elements \n";
    display(arr,n);
    cout<<"Your repeating element is : "<<repeatEle(arr,n);
return 0;
}