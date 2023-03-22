// SQUARE ROOT OF A NUMBER  
#include<bits/stdc++.h>
using namespace std;
int squareRoot(int n)
{
    int i=1;
    while(i*i<=n)
    {
        i++;
    }
    return (i-1);
}
int main()
{
    int n;
    cout<<"Enter the number to find its square root\n";
    cin>>n;
    cout<<"Square root of your number is : "<<squareRoot(n);
return 0;
}