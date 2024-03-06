//  STACK IMPLEMENTATIOIN USING VECTOR IN C++ STL
#include<bits/stdc++.h>
using namespace std;
class Mystack
{
    public:
    vector<int>v;
    int top;
    void push(int val);
    int pop();
    bool isempty();
    int peek();
    int Size();
    void display()
    {
        for(auto it=v.begin();it!=v.end();it++)
        {
            cout<<(*it)<<" ";
        }
        cout<<endl;
    }
};
void Mystack :: push(int val)
{
    v.push_back(val);
}
int Mystack :: pop()
{
    if(v.empty())
    {
        return -1;
    }
    int res=v.back();
    v.pop_back();
    return res;
}
bool Mystack :: isempty()
{
    return v.empty();
}
int Mystack :: peek()
{
    if(v.empty())
    {
        return -1;
    }
    return v.back();
}
int Mystack :: Size()
{
    return v.size();
}
int main()
{
    Mystack s;
    cout<<"Enter 0 for exit :\n";
    cout<<"Enter 1 for push an item in your stack :\n";
    cout<<"Enter 2 for pop an item in your stack :\n";
    cout<<"Enter 3 for peek an item in your stack :\n";
    cout<<"Enter 4 for get size of your stack  :\n";
    cout<<"Enter 5 to check whether stack is empty or not :\n";
    cout<<"Enter 6 for clear screen :\n";
    cout<<"Enter 7 for display :\n";
    int choice;
    do
    {
        cout<<"Enter the choice :\n";
        cin>>choice;
        switch (choice)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                int value;
                cout<<"Enter the value to be push :\n";
                cin>>value;
                s.push(value);
                break;
            }
            case 2:
            {

                cout<<"Item poped is : "<<s.pop()<<endl;
                break;
            }
            case 3:
            {
                cout<<"Peeked item is : "<<s.peek()<<endl;
                break;
            }
            case 4:
            {
                cout<<"Your stack size is : "<<s.Size()<<endl;
                break;
            }
            case 5:
            {
                if(s.isempty())
                {
                    cout<<"your stack is empty :\n";
                }
                else
                {
                    cout<<"Stack is not empty :\n";
                }
                break;
            }
            case 6:
            {
                system("cls");
                break;
            }
            case 7:
            {
                cout<<"Displaying your stack :\n";
                s.display();
                break;
            }
            default :
            {
                cout<<"Invalid entry :\n";
                break; 
            }
        }
    } while (choice!=0);
return 0;
}