// STACK IN C++ STL 
#include<bits/stdc++.h>
using namespace std;
void display(stack<int>&s)
{
    stack<int>temp=s;
    while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // THIS WILL PRINT IN REVERSE ORDER 

    display(s);
    s.pop();

    // AFTER REMOVING THE TOP ELEMENT
    
    display(s);
return 0;
}