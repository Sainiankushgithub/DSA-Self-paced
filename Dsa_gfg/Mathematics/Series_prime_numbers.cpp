/*PRINTING THE SERIES OF PRIME NUMBERS TILL YOUR ENTERED NUMBER*/
#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2||n==3)
    {
        return 1;
    }
    if(n%2==0||n%3==0)
    {
        return 0;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0||n%(i+2)==0)
        {
            return 0;
        }
    }
    return 1;
}
void primenumbers(int n)
{
    for(int i=0;i<n;i++)
    {
        if(isprime(i))
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number to check whether entered number is prime or not?\n");
    scanf("%d",&n);
    isprime(n);
    printf("Entered number %d is prime or not ?\n",n);
    if(isprime(n)==0)
    {
        printf("NO ! Its not prime\n");
    }
    else{
        printf("YES ! Its prime \n");
    }
    printf("Displaying the series of prime number till your entered number %d\n",n);
    primenumbers(n);
return 0;
}