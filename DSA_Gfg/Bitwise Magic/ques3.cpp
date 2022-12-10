/*HOW DO YOU CHECK THE KTH BIT IS SET BIT OR NOT*/
#include<bits/stdc++.h>
using namespace std;
void isset(int n,int k)
{
    int x=1;
    for(int i=0;i<k-1;i++)
    {
        x=x*2;
        printf("x=%d\n",x);
    }
    if((n&x)!=0)
        {
            printf("Kth bit is the set bit");
        }
        else
        {
            printf("Kth bit is not the set bit");
        }
}
int main()
{
    int n,k;
    printf("Enter the number whose kth bit want to check\n");
    scanf("%d",&n);
    printf("Enter the kth bit to check is it set bit or not?\n");
    scanf("%d",&k);
    isset(n,k);
return 0;
}