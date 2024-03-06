// REPEAT ELEMENT EFFICIENT SOLUTION
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
// bool visitedarr(bool visited[],int n)
// {
//     for(int )                                                           // NEED OPTIMIZATION 
// }
// int repeatedEle(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(visitedarr(arr[i]))
//         {                      
//             return arr[i];
//         }
//         visitedarr(arr[i])=true;
//     }
// }
int main()
{
    int n;
    cout<<"Enterthe size of an array\n";
    cin>>n;
    bool visited[n]={0};                                                    // ALL THE ELEMENTS ARE PRESENT FROM MAX TO ARR*(MAX)
    int arr[n];                                                             // I.E 0<=MAX(ARR)<=N-2
    cout<<"Enter the numbers of an element of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements are \n";
    display(arr,n);
    cout<<"Repeated element is : "<<repeatedEle(arr,visited,n);
return 0;
}