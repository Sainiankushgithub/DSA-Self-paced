// IMPLEMENTING A QUEUE USING A STACK 
#include<bits/stdc++.h>
using namespace std;
#define N 5
struct Queue
{
    int top1,top2;
    int *s1,*s2;
    Queue()
    {
        top1=top2=-1;
        s1=new int[N];
        s2=new int[N];
    }
    void Enqueue(int x)
    {
        if(top1==N-1)
        {
            cout<<"STACK FULL !!!!\n";
        }
        else
        {
            top1++;
            s1[top1]=x;
        }
    }
    void Dequeue()
    {
        if(top1==-1&&top2==-1)
        {
            cout<<"STACK EMPTY !!!\n";
        }
        else
        {
            if(top2==-1)
            {
                while(top1>=0)
                {
                    top2++;
                    s2[top2]=s1[top1];
                    top1--;
                }
            }
            cout<<"Dequeued Element : "<<s2[top2]<<endl;
            top2--;
            while(top2>=0)
            {
                top1++;
                s1[top1]=s2[top2];
                top2--;
            }
        }
    }
    void Display()
    {
        if(top1==-1&&top2==-1)
        {
            cout<<"STACK EMPTY !!!!\n";
        }
        else
        {
            for(int i=0;i<=top1;i++)
            {
                cout<<s1[i]<<" ";
            }
            cout<<endl;
        }
    }
}q;
int main()
{
    cout<<"1.Enqueue()\n2.Dequeue()\n3.Display()\n4.Exit()\n";
    int choice;
    do
    {
        cout<<"Enter the choice \n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                int x;
                cout<<"Enter the element to be inserted \n";
                cin>>x;
                q.Enqueue(x);
                break;
            }
            case 2:
            {
                q.Dequeue();
                break;
            }
            case 3:
            {
                cout<<"Displaying the Circular Queue Element \n";
                q.Display();
                break;
            }
            case 4:
            {
                exit(1);
            }
            default:
            {
                cout<<"Invalid Entry\n";
                break;
            }
        }
    } while (choice!=4);   
return 0;
}