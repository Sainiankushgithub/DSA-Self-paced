/*COUNT SET BIT */
#include<bits/stdc++.h>
using namespace std;
int countsetbit(int n)
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
}
int main()
{
    int n;
    printf("Enter the number to count its sets bit\n");
    scanf("%d",&n);
    countsetbit(n);
    printf("Total number of set bits in %d is %d",n,countsetbit(n));
return 0;
}