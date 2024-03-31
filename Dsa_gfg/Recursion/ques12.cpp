// FINDING THE PRIME NUMBER USING RECURSION
#include<bits/stdc++.h>
using namespace std;
bool prime(int n,int i)
{
    if(n==i)
    {
        return 1;
    }
    if(n==2||n==3)
    {
        return 1;
    }
    if(prime(n,i+1))
    {
        cout<<"n="<<n<<"i="<<i<<endl;
        if(n%i==0)
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter the number check whether entered number is prime or not\n";
    cin>>n;
    int i=2;
    if(prime(n,i)==0)
    {
        cout<<"Entered number is not  prime \n";
    }
    else
    {
        cout<<"Entered number is prime \n";
    }
return 0;
}