// IMPLEMENTATION OF CIRCULAR DOUBLY LINKED LIST 
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
    if(head==nullptr)
    {
        return ;
    }
    Node*p=head;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    } while (p!=head);
    
}
int main()
{

    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->prev=head;
    head->next->next=new Node(30);
    head->next->next->prev=head->next;
    head->next->next->next=head;
    head->prev=head->next->next->next;
    cout<<"Displaying your doubly linked list :\n";
    display(head);
return 0;
}