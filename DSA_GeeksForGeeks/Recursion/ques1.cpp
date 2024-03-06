#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if(n==0)
    return;
    cout<<"GeeksforGeeks"<<endl;
    fun(n-1);
}
int main()
{
    fun(2);
return 0;
}