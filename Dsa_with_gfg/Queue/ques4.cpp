//  QUEUE IN C++ STL 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;

    // PUSH OPERATION IN QUEUE 

    q.push(10);
    q.push(20);
    q.push(30);

    // FRONT OPERATION IN QUEUE 

    cout<<"First item is : "<<q.front()<<endl;

    // BACK OPERATION IN QUEUE 

    cout<<"Back item is : "<<q.back()<<endl;

    // POP OPERATION IN QUEUE

    q.pop();
    cout<<"First item after pop is : "<<q.front()<<endl;

    // EMPTY OPERATION IN QUEUE 

    if(!q.empty())
    {
        cout<<"Queue is not empty : \n";
    }
    else
    {
        cout<<"Queue is empty : \n";

    }

    // SIZE OPERATION IN QUEUE 

    cout<<"Size of your queue is : "<<q.size()<<endl;

    q.pop();
    q.pop();
    cout<<"After poping all the elements size of queue is : "<<q.size()<<endl;
    if(!q.empty())
    {
        cout<<"Queue is not empty :\n";
    }
    else
    {
        cout<<"Queue is empty :\n";
    }
return 0;
}