// DESIGN A STACK THAT SUPPORT GETMIN ()
#include<bits/stdc++.h>
using namespace std;
struct Mystack
{
    stack<int>minstack;
    int top;
    int *arr;
    int cap;
    Mystack(int size)
    {
        cap=size;
        top=-1;
        arr=new int[size];
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"Stack overflow item cannot be insert :\n";
            return ;
        }
        if(minstack.empty()||x<=minstack.top())
        {
            minstack.push(x);
        }
        top++;
        arr[top]=x;
    }
    int  pop()
    {
        if(top==-1)
        {
            cout<<"Item cannot be poped because stack is underflow :\n";
            return -1;
        }
        int x=arr[top];
        top--;
        return x;
    }
    int peek()
    {
        return arr[top];
    }
    bool isempty()
    {
        return (top==-1);
    }
    int Size()
    {
        return (top+1);
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Cannot display Coz  your stack is empty !!!!!!! :\n";
            return;
        }
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int minimum()
    {
        return minstack.top();
    }
};
int main()
{
    int n;
    cout<<"Enter the size of your stack :\n";
    cin>>n;
    Mystack s(n);
    cout<<"Enter 0 for exit :\n";
    cout<<"Enter 1 for push an item in your stack :\n";
    cout<<"Enter 2 for pop an item in your stack :\n";
    cout<<"Enter 3 for peek an item in your stack :\n";
    cout<<"Enter 4 for get size of your stack  :\n";
    cout<<"Enter 5 to check whether stack is empty or not :\n";
    cout<<"Enter 6 for clear screen :\n";
    cout<<"Enter 7 for display :\n";
    cout<<"Enter 8 to get the minimum of your stack :\n";
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
                if(s.isempty()==-1)
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
            case 8:
            {
                cout<<"Minimum element is : "<<s.minimum()<<endl;
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