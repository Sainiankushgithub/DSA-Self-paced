// ANOTEHR METHOD CHECKING THE NUMBER IS PRIME OR NOT
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n==1)
    {
        return false;
    }
    int i=2;
    while(i*i<=n)
    {
        if(n%i==0)
        {
            return false;
        }
        i++;
    }
    return true;
}
bool isPrime(int num)
{
    if(num==1)
    {
        return false;
    }
    if(num==2)
    {
        return true;
    }
    if(num==3)
    {
        return true;
    }
    if(num%2==0||num%3==0)
    {
        return false;
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number to check whether entered number is prime or not\n";
    cin>>n;
    cout<<"Entered number is prime or not -> "<<isprime(n)<<endl;
    int num;
    cout<<"Enter the number to check whether entered number is prime or not\n";
    cin>>num;
    isPrime(num);
return 0;
}