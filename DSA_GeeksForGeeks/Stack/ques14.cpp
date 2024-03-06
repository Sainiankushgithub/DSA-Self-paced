// DESIGN A STACK THAT SUPPORT GETMIN () WITHOUT USIGN STACK EXTERNALLY 
#include<bits/stdc++.h>
using namespace std;
struct Mystack
{
    int top;
    int *ms;              // ms ->     MAIN STACK
    int *as;              // as ->     AUXILLARLY STACK
    int cap;
    Mystack(int size)
    {
        cap=size;
        top=-1;
        ms=new int[size];
        as=new int[size];
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"Stack overflow item cannot be insert :\n";
            return ;
        }
        top++;
        ms[top]=x;
        if(top==0||x<=as[top])
        {
            as[top]=x;
        }
        top++;
        ms[top]=x;
    }
    int  pop()
    {
        if(top==-1)
        {
            cout<<"Item cannot be poped because stack is underflow :\n";
            return -1;
        }
        if(as[top]==ms[top])
        {
            top--;
        }
        int x=ms[top];
        top--;
        return x;
    }
    int peek()
    {
        return ms[top];
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
            cout<<ms[i]<<" ";
        }
        cout<<endl;
    }
    int minimum()
    {
        return as[top];
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