// INSERT AT BEGIN IN DOUBLY LINKED LIST
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
Node*InsertBegin(Node*head,int x)
{
    Node*temp=new Node(x);
    temp->next=head;
    if(head!=NULL)
    {
        head->prev=temp;
    }
    return temp;
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->prev=head;
    head->next->next=new Node(30);
    head->next->next->prev=head->next;
    cout<<"Displaying your doubly linked list :\n";
    display(head);
    head=InsertBegin(head,5);
    cout<<"Displaying your linked list after inserting at the begin :\n";
    display(head);
return 0;
}