/*COUNT SET BIT */
#include<bits/stdc++.h>
using namespace std;
/*int countsetbit(int n)
{
    int res=0;
    while(n>0)
    {
        if(n%2==1)
        {
            res++;
        }
        n=n/2;
    }
    return res;
}*/
/*BRIAN KERNINGAM'S ALGORITM */
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
int main()
{
    int n;
    cout<<"Enter the number to count its sets bit\n";
    cin>>n;
    countsetbit(n);
    cout<<"Total number of set bits in "<<n<<" is "<<countsetbit(n);
return 0;
}