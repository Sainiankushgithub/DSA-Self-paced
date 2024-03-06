// LEFT ROTATE AN ARRAY BY D USING REVERSAL ALGORITHM
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
void leftRotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);                               // THIS IS AN METHOD THIRD TO DO LEFT ROTATION
    reverse(arr,0,n-1);
}
void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main()                    

                      // THIS CODE SHOW ME AN ERROR
/*ques14.cpp: In function 'void leftRotate(int*, int, int)':
ques14.cpp:14:12: error: no matching function for call to 'reverse(int*&, int, int)'
   14 |     reverse(arr,0,d-1);
      |     ~~~~~~~^~~~~~~~~~~*/
      
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers of an elemets\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array before any left rotation\n";                   
    display(arr,size);
    int d;
    cout<<"Enter the number for how many left rotation  you want to do\n";
    cin>>d;
    leftRotate(arr,size,d);
    reverse(arr,size,d);
    cout<<"Displaying your array after some left rotation\n";
    display(arr,size);
return 0;
}