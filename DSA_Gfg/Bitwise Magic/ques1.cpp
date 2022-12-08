/*BITWISE AND-OR-XOR-LEFT_SHIFT-RIGHT_SHIFT-OPERATORS*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=3;
    int y=6;
    /*BINARY REPRESENTATION OF 3 :000000......011
      BINARY REPRESENTATION OF 6 :000000......110
               AND OPERATION (&) :000000......010
               WHICH IS EQUAL TO : 2
     */
    cout<<"Result of bitwise AND operator : ";
    cout<<(x&y);
    /*BINARY REPRESENTATION OF 3 :000000......011
      BINARY REPRESENTATION OF 6 :000000......110
               OR OPERATION (|) :000000......111
               WHICH IS EQUAL TO : 7
     */
    cout<<"\nResult of bitwise OR operator : ";
    cout<<(x|y);
    /*BINARY REPRESENTATION OF 3 :000000......011
      BINARY REPRESENTATION OF 6 :000000......110
               XOR OPERATION (^) :000000......101
               WHICH IS EQUAL TO : 5
     */
    cout<<"\nResult of bitwise XOR operator : ";
    cout<<(x^y);
    /*BINARY REPRESENTATION OF 3 :000000......011
               left shift of 3 :xx0000......01100
               which is equal to:12
                Right shift of 3 :000000......000
               which is equal to:0
      BINARY REPRESENTATION OF 6 :000000......110
     */
    cout<<"\nResult of bitwise left shift of x : ";
    cout<<(x<<2);
    cout<<"\nResult of bitwise left shift of y : ";
    cout<<(y<<2);
    cout<<"\nResult of bitwise right shift of x : ";
    cout<<(x>>2);
    cout<<"\nResult of bitwise right shift of y : ";
    cout<<(y>>2);
    /*ANOTHER WAY OF FINDING THE LEFT AND RIGHT SHIFT*/
    int x1;
    int y1;
    cout<<"\nEnter the number whom left shift you want to find ";
    cin>>x1;
    int arr[100];
    int i=0;
    int temp=x1;
    while(temp>0)
    {
        int r=temp%2;
        arr[i]=r;
        temp=temp/2;
        i++;
    }
    cout<<"Binary representatio of your number "<<x1<<endl;
    cout<<"0 0 0 0 0 ..........0 0 0 ";
    for( i--;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the number how many number you want to left shift ";
    cin>>y1;
    int p;
    p=pow(2,y1);
    cout<<endl;
    cout<<"Left shift of you number "<<x1<<" "<<"with "<<y1<<endl;
    cout<<"Result of your left shift = ";
    cout<<x*p;
return 0;
}                                            