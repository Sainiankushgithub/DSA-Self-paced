// CHECK WHETHER ENTERED NUMBER IS EVEN OR ODD BY AND(&) OPERATOR
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to check whether entered number is even or not\n";
    cin>>num;
    if(num&1==1)
    {
        cout<<"Entered number "<<num<<" is an odd number\n";
    }
    else
    {
        cout<<"Entered number "<<num<<" is an even number\n";
    }
    /*EASY WAY TO CALCULATE 2^N USING BITWISE OPERATOR*/
    int n;
    cout<<"Enter the power of 2\n";
    cout<<"N= ";
    cin>>n;
    cout<<"2^N : ";
    cout<<(1<<n);
return 0;
}