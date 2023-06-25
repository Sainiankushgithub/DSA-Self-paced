// ANOTEHR METHOD CHECKING THE NUMBER IS PRIME OR NOT
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
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
    if(num==2||num==3)
    {
        return true;
    }
    if(num%2==0||num%3==0)
    {
        return false;
    }
    for(int i=5;i*i<=num;i=i+6)
    {
        if(num%i==0||num%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // auto start=high_resolution_clock::now();
    int n;
    cout<<"Enter the number to check whether entered number is prime or not\n";
    cin>>n;
    cout<<"Entered number is prime or not -> "<<isprime(n)<<endl;
    // auto stop=high_resolution_clock::now();
    // auto duration=duration_cast<microseconds>(stop-start);
    // cout<<"Time taken by code 1 is "<<duration.count()<<endl;
    auto start=high_resolution_clock::now();
    int num;
    cout<<"Enter the number to check whether entered number is prime or not\n";
    cin>>num;
    cout<<"Entered number id prime or not -> "<<isPrime(num)<<endl;
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    cout<<"Time taken by code 2 is : "<<duration.count()<<endl;
return 0;
}