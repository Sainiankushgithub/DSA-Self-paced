/*POWER OF SET 2 ?*/
#include<bits/stdc++.h>
using namespace std;
/*NAIVE SOLUTION TO CALCULATE POWER SET OF 2*/
bool ispow2(int n)
{
    if(n==0)
    {
        return false;
    }
    while(n!=1)
    {
        if(n%2!=0)
        {
            return false;
        }
        n=n/2;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number to check whether its a power of two or not\n";
    cin>>n;
    cout<<ispow2(n);
return 0;
}