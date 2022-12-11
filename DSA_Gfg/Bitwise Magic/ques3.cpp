/*HOW DO YOU CHECK THE KTH BIT IS SET BIT OR NOT*/
#include<bits/stdc++.h>
using namespace std;

/*NAIVE SOLUTION TO CHECK THE KTH BIT IS SET OR NOT*/

/*void isset(int n,int k)
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
}*/

/*ALTENATIVE NAIVE SOLUTION TO CHECK THE KTH BIT IS SET OR NOT*/

/*void isset(int n, int k)
{
    for(int i=0;i<(k-1);i++)
    {
        n=n/2;
    }
    if((n&1)!=0)
    {
        printf("Yes Kth bit is the set bit\n");
    }
    else
    {
        printf("No Kth bit is not the set bit\n");
    }
}*/

/*EFFICENT METHOD I TO CHECK FOR KTH BIT*/
/*
void isset(int n,int k)
{
    int x=(1<<(k-1));
    if((n&x)!=0)
    {
        printf("Yes Kth bit is the set bit\n");
    }
    else
    {
        printf("No Kth bit is not the set bit\n");
    }
}*/

/*EFFICENT METHOD II TO CHECK FOR KTH BIT*/

void isset(int n,int k)
{
    int x=(n>>(k-1));
    if((x&1)!=0)
    {
        printf("Yes Kth bit is the set bit\n");
    }
    else
    {
        printf("No Kth bit is not the set bit\n");
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