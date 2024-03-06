// EFFICIENT SOLUTION TO CHECK GIVEN NUMBER IS POWER OF TWO OR NOT USING BITIWSE MAGIC 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number \n";
    cin>>n;
    if((n & (n-1)) == 0)
    {
        cout<<"Given number "<<n<<" is a power of two\n";
    }
    else
    {
        cout<<"Given number "<<n<<" is not  a power of two\n";
    }
return 0;
} 