// IMPLEMENTATION OF QUEUE USING LINEKD LIST IN C++
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node*next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
struct Node*front=NULL;
struct Node*rear=NULL;
void Enqueue(int x)
{
    Node*temp=new Node(x);
    if(front==NULL&&rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void Dequeue()
{
    if(front==NULL)
    {
        cout<<"Queue is empty()"<<endl;
        return;
    }
    else
    {
        cout<<"Dequeued Node "<<front->data<<endl;
        Node*temp=front;
        front=front->next;
        delete temp;
    }
}
void display()
{
    if(rear==NULL&&rear==NULL)
    {
        cout<<"Queue is empty()"<<endl;
        return;
    }
    else
    {
        Node*temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
}
int main()
{
    cout<<"1.Enqueue()\n2.Dequeue()\n3.Display()\n4.exit()\n";
    int choice;
    do
    {
        cout<<"Enter the choice :\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                int x;
                cout<<"Enter the Element to be enqueued\n";
                scanf("%d",&x);
                Enqueue(x);
                break;
            }
            case 2:
            {
                Dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"Exited\n";
                exit(1);
                break;
            }
            default:
            {
                cout<<"Invalid entry\n";
                break;
            }
        }
    } while (choice!=4);
    
    return 0;
}