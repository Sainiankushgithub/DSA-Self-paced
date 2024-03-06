// IMPLEMENTATION OF CIRCULAR QUEUE
#include<bits/stdc++.h>
using namespace std;
#define N 6
struct Queue
{
    int front;
    int rear;
    int *CirQue;
    Queue()
    {
        front=-1;
        rear=-1;
        CirQue=new int[N];
    }
    void Enqueue(int x)
    {
        if(front==-1&&rear==-1)
        {
            front=rear=0;
            CirQue[rear]=x;
        }
        else if((rear+1)%N==front)
        {
            cout<<"QUEUE IS FULL()\n";
        }
        else
        {
            rear=(rear+1)%N;
            CirQue[rear]=x;
        }
    }
    void Dequeue()
    {
        if(front==-1&&rear==-1)
        {
            cout<<"QUEUE IS EMPTY()\n";
        }
        else if(front==rear)
        {
            cout<<"Dequeued Element : "<<CirQue[front]<<endl;
            front=rear=-1;
        }
        else 
        {
            cout<<"Dequeued Element : "<<CirQue[front]<<endl;
            front=(front+1)%N;
        }
    }
    void Display()
    {
        if(front==-1&&rear==-1)
        {
            cout<<"QUEUE IS EMPTY()\n";
        }
        else
        {
            int i=front;
            while(i!=rear)
            {
                cout<<CirQue[i]<<" ";
                i=(i+1)%N;
            }
            cout<<CirQue[i]<<endl;
        }
    }
}q;
int main()
{
    printf("1.Enqueue()\n2.Dequeue()\n3.Display()\n4.Exit()\n");
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
                scanf("%d",&x);
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