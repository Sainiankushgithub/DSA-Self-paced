// FACTORIAL USING RECURSION
#include<bits/stdc++.h>
using namespace std;
long long fact(int n)
{                       // VALID UPTO 20      
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number to finds its factorial\n";
    cin>>n;
    fact(n);
    cout<<"Fctorial of your number is "<<fact(n);
return 0;
}