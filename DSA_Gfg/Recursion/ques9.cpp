// 1. REVERSE A NUMBER USING RECURSION
// 2. CHECK WHETHER GIVEN NUMBER IS PALINDROME OR NOT
#include<bits/stdc++.h>
using namespace std;
// 1. REVERSE A NUMBER USING RECURSION
void reverse(int n)
{
    if(n<10)
    {
        cout<<n;
        return;
    }
    else{
        cout<<n%10;
        reverse(n/10);
    }
}
int main()
{
    int n;
    cout<<"Enter the number to get its reverse using recursion\n";
    cin>>n;
    reverse(n);
return 0;
} 
