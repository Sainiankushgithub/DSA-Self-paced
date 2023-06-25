// FINDING THE PRIME NUMBER USING NAVIE SOLUTION
#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n)
{
    if(n==1)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            return false;
        }
        i++;
    }
    return true;
}
void displayprime(int num)
{
    int i=1;
    while(i<=num)
    {
        if(checkprime(i))
        {
            cout<<i<<" ";
        }
        i++;
    }
}
int main()
{
    int n;
    cout<<"Enter the number to check whether entered number is prime or not\n";
    cin>>n;
    cout<<"Entered number is prime or not -> "<<checkprime(n)<<endl;
    int num;
    cout<<"Enter the number to display the list of prime numbers upto your entered number\n";
    cin>>num;
    cout<<"Displaying the list of prime numbers\n";
    displayprime(num);
return 0;
}