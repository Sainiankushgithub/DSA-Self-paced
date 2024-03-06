// IMPLEMENTATION OF A CIRCULAR LINKED LIST 
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
    cout<<head->data<<" ";
    Node*p=head->next;
    while(p!=head)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    cout<<"Displaying your doubly linked list :\n";
    display(head);
return 0;
}