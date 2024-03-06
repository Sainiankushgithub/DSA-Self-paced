// SUM OF THE DIGIT USING THE RECURSION
#include<bits/stdc++.h>
using namespace std;
int getsum(int n)
{
        if(n==0)           // BASE CASE------->RECURSUION TERMINATING CONDITION
    {
        return 0;
    }
    return getsum(n/10)+n%10;            // LOGIC HERE
}
int main()
{
    int n;
    cout<<"Enter the number to get the sum  of the digit\n";
    cin>>n;
    cout<<"Sum of the digit is "<<getsum(n);
return 0;
}