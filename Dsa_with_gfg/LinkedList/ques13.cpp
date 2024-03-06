// DOUBLY LINKED LIST 
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int x)
    {
        next=NULL;
        prev=NULL;
        data=x;
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
int main()
{
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=NULL;
    cout<<"Displaying your Linked list elements :\n";
    display(head);
return 0;
}