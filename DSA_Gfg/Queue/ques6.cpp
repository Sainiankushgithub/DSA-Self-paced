// REVERSE A QUEUE ITERATIVE SOLUTION
#include<bits/stdc++.h>
using namespace std;
void ReverseQue(queue<int>&q)
{
    stack<int>s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}
void display(queue<int>&q)
{
    queue<int>temp=q;
    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int>q;
    int num;
    cout<<"Enter the number how many itme you want to insert :\n";
    cin>>num;
    cout<<"Enter the element to your queue :\n";
    for(int i=0;i<num;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    cout<<"Displaying your Queue before reverse :\n";
    display(q);
    cout<<"Displaying your Queue After reverse :\n";
    ReverseQue(q);
    display(q);
return 0;
}