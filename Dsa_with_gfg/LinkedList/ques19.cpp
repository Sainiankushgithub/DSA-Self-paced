// DELETE THE FIRST NODE OF A DOUBLY LINKED LIST
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
    Node*curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
Node*DeleteFirst(Node*head)
{
    Node*temp=head;
    Node*curr=temp->next;
    delete temp;
    return curr;
}
int main()
{
    /* DOUBLY LINKED LIST IMPLEMENTATION */
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->prev=head;
    head->next->next=new Node(30);
    head->next->next->prev=head->next;
    cout<<"Displaying your doubly linked list :\n";
    display(head);
    cout<<"Displaying your doubly linked list after deleting the first node :\n";
    head=DeleteFirst(head);
    display(head);
return 0;
}