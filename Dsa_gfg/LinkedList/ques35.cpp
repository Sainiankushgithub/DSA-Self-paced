// MIDDLE OF THE LINKED LIST EFFICIENT SOLUTION
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
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void MiddleLinkedList(Node*head)
{
    if(head==NULL)
    return;
    Node*slow=head,*fast=head;
    while(fast!=nullptr&&fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<" ";
    cout<<endl;
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<"Displaying your linked list before inserting the element :\n";
    display(head);
    cout<<"Displaying your Linked list middle element :\n";
    MiddleLinkedList(head);
return 0;
}