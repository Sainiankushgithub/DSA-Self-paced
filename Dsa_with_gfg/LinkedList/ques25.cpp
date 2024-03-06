// INSERT AT THE END IN CIRCULAR LINKED LIST 
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
void display(Node*head)
{
    if(head==NULL)
    {
        return ;
    }
    Node*p=head;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    } while (p!=head);
    cout<<endl;
}
Node*InsertEnd(Node*head,int x)
{
    Node*temp=new Node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        Node*curr=head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return head;
    }
}
int main()
{
    // FOR NULL CASE 
    // Node*head=NULL;
    
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    cout<<"Displaying your doubly linked list :\n";
    display(head);
    head=InsertEnd(head,40);
    cout<<"Displaying your circular linked list after inserting at the End :\n";
    display(head);
return 0;
}