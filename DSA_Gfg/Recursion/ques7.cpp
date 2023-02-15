// FIBBONACCI SERIES USING RECURSION
#include<bits/stdc++.h>
using namespace std;
int fibbonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibbonacci(n-1)+fibbonacci(n-2);
}
int main()
{
    int n;
    cout<<"Enter the number to gets its fibbonacci number\n";
    cin>>n;
    fibbonacci(n);
    cout<<"Fibboncci number is "<<fibbonacci(n);
return 0;
}