// SIMPLE STACK IMPLEMENTATION 
#include<bits/stdc++.h>
using namespace std;
struct Mystack
{
    int *arr;
    int cap;
    int top;
    Mystack(int c)
    {
        cap=c;
        arr=new int [cap];
        top=-1;
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"Stack is overflow :\n";
            cout<<"SORRY ! Item cannot be added :\n";
            return;
        }
        top++;
        arr[top]=x;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack is underflow :\n";
            return -1;
        }
        int res=arr[top];
        top--;
        return res;
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
        return(top+1);
    }
    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int c;
    cout<<"Enter the capacity of your array :\n";
    cin>>c;
    Mystack s(c);
    int size;
    cout<<"Enter the size of your array :\n";
    cin>>size;
    cout<<"Enter the item to be inserted :\n";
    for(int i=0;i<size;i++)
    {
        int item;
        cin>>item;
        s.push(item);
    }
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
            default :
            {
                cout<<"Invalid entry :\n";
                break; 
            }
        }
    } while (choice!=0);
    
return 0;
}