// 1. REVERSE A NUMBER USING RECURSION
// 2. CHECK WHETHER GIVEN NUMBER IS PALINDROME OR NOT
#include<bits/stdc++.h>
using namespace std;
// 1. REVERSE A NUMBER USING RECURSION
int reverse(int n,int sum)
{
    if(n==0)
    {
        return sum;
    }
    else{
    return reverse(n/10,sum*10+n%10);
}
}
bool palindrome(int n)
{
    if(reverse(n,0)==n)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cout<<"Enter the number to get its reverse using recursion\n";
    cin>>n;
    reverse(n,0);
    cout<<"Reverse of your number is "<<reverse(n,0);
    cout<<endl;
    // 2.CHECK WHETHER GIVEN NUMBER IS PALINDROME OR NOT 
    palindrome(n);
    cout<<"Your number is palindrome or not "<<palindrome(n);
    return 0;
} 
