// SUM  OF N NATURAL NUMBER USING RECURSION
#include<bits/stdc++.h>
using namespace std;
int getsum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+getsum(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number to find the sum of its natural number\n";
    cin>>n;
    cout<<"Sum of n natural number is "<<getsum(n);
return 0;
}