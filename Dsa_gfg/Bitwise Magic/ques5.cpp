/*POWER OF TWO OR NOT?---------->> ON HIS OWN MIND THIS METHOD DISCOVER BY ANKUSH SAINI*/
#include<bits/stdc++.h>
using namespace std;
int countsetbit(int n)
{
    int res=0;
    while(n>0)
    {
        n=n&(n-1);
        res++;
        n=n/2;
    }
    return res;
}
void poweroftwo(int n)
{
    if(countsetbit(n)==1)
    {
        cout<<"YES it is power of two\n";
    }
    else
    {
        cout<<"NO it is not a power of two\n";
    }
}
int main()
{
    int n;
    cout<<"Enter any power to check whether its a power of two not\n";
    cin>>n;
    countsetbit(n);
    poweroftwo(n);
return 0;
}