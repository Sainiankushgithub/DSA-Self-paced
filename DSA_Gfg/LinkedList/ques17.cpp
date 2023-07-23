// INSERT AT THE END IN DOUBLY LINKED LIST
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node*prev;
    Node(int x)
    {
        data=x;
        next=NULL; 
        prev=NULL;
    }
};
void display(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node*InsertEnd(Node*head,int x)
{
    Node*temp=new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    Node*curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}
int main()
{
    // IF YOUR HEAD IS NULL 
    // Node*head=NULL;


    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->prev=head;
    head->next->next=new Node(30);
    head->next->next->prev=head->next;
    cout<<"Displaying your doubly linked list :\n";
    display(head);
    head=InsertEnd(head,40);
    cout<<"Displaying your linked list after inserting at the end :\n";
    display(head);
return 0;
}