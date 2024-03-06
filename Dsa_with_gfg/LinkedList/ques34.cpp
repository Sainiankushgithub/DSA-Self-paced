// MIDDLE OF THE LINKED LIST NAIVE SOLUTION
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
    int count =0;
    Node*curr=head;
    while(curr!=NULL)
    {
        count++;
        curr=curr->next;
    }
    curr=head;
    for(int i=0;i<count/2;i++)
    {
        curr=curr->next;
    }
    cout<<curr->data<<" ";
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    cout<<"Displaying your linked list before inserting the element :\n";
    display(head);
    cout<<"Displaying your Linked list middle element :\n";
    MiddleLinkedList(head);
return 0;
}