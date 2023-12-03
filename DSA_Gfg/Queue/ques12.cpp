// IMPLEMENT A CIRCULAR QUEUE USING LINKED LIST
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node*front=NULL;
Node*rear=NULL;
void Enqueue(int x)
    {
        Node*temp=new Node(x);
        if(front==NULL&&rear==NULL)
        {
            front=rear=temp;
            rear->next=front;
        }
        else 
        {
            rear->next=temp;
            rear=temp;
            rear->next=front;
        }
    }
    void Dequeue()
    {
        Node*temp=front;
        if(front==NULL&&rear==NULL)
        {
            cout<<"Queue is empty ()\n";
        }
        else if(front==rear)
        {
            cout<<front->data<<" : Deleted node \n";
            front=rear=NULL;
            delete temp;
        }
        else
        {
            front=front->next;
            rear->next=front;
            delete temp;
        }
    }
    void Display()
    {
        if(front==NULL&&rear==NULL)
        {
            cout<<"Queue is empty()\n";
        }
        else
        {
            Node*curr=front;
            do
            {
                cout<<curr->data<<" ";
                curr=curr->next;
                
            } while (curr!=rear);
            cout<<endl;
        }
    }
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
                cout<<"Displaying the Circular Queue Element \n";
                Display();
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