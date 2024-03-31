// IMPLEMENT TWO STACK IN AN ARRAY
#include<bits/stdc++.h>
using namespace std;
class MyTwostacks
{
    public:
    int *arr;
    int cap;
    int top1;
    int top2;
    MyTwostacks(int n)
    {
        cap=n;
        top1=-1;
        top2=n;
        arr=new int[n];
    }
    bool push1(int x)
    {
        if(top1<top2-1)
        {
            top1++;
            arr[top1]=x;
            return true;
        }
        return false;
    }
    bool push2(int x)
    {
        if(top1<top2-1)
        {
            top2--;
            arr[top2]=x;
            return true;
        }
        return false;
    }
    int pop1()
    {
        if(top1>=0)
        {
            int x=arr[top1];
            top1--; 
            return x;
        }
        return -1;
    }
    int pop2()
    {
        if(top2<cap)
        {
            int x=arr[top2];
            top2++; 
            return x;
        }
        return -1;
    }
    int size1()
    {
        return (top1+1);
    }
    int size2()
    {
        return (cap-top2);
    }
};
int main()
{
    int size;
    cout<<"Enter the size of your array : ";
    cin>>size;
    MyTwostacks m(size);
    cout<<"Enter 0 for exit:\n";
    cout<<"Enter 1 for pushing the element of stack1 :\n";
    cout<<"Enter 2 for pushing the element of stack2 :\n";
    cout<<"Enter 3 to pop the element of stack1 :\n";
    cout<<"Enter 4 to pop the element of stack2 :\n";
    cout<<"Enter 5 to get the size  of stack1 :\n";
    cout<<"Enter 6 to get the size  of stack2 :\n";
    cout<<"Enter 7 for clear screen \n";
    int choice;
    do
    {
        cout<<"\nEnter the choice : ";
        cin>>choice;
        switch(choice)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                int element;
                cout<<"Enter the element to be push :\n";
                cin>>element;
                if(m.push1(element))
                {
                    cout<<"Inserted\n";
                }
                else
                {
                    cout<<"Stack overflow\n";
                }
                break;
            }
            case 2:
            {
                int element;
                cout<<"Enter the element to be push :\n";
                cin>>element;
                if(m.push2(element))
                {
                    cout<<"Inserted\n";
                }
                else
                {
                    cout<<"Stack overflow\n";
                }
                break;
            }
            case 3:
            {
                int popped=m.pop1();
                if(popped==-1)
                {
                    cout<<"Stack underflow :\n";
                }
                else
                {
                    cout<<"popped element is :"<<popped;
                }
                break;
            }
            case 4:
            {
                int popped=m.pop2();
                if(popped==-1)
                {
                    cout<<"Stack underflow :\n";
                }
                else
                {
                    cout<<"popped element is :"<<popped;
                }
                break;
            }
            case 5:
            {
                cout<<"size of stack 1 is : "<<m.size1()<<endl;
                break;
            }
            case 6:
            {
                cout<<"size of stack 2 is : "<<m.size2()<<endl;
                break;
            }
            case 7:
            {
                system("cls");
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