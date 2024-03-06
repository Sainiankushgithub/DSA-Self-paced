// DELETE THE FIRST NODE  IN CIRCULAR LINKED LIST  NAIVE SOLUTION 
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
Node*DelFirst(Node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    Node*curr=head;
    Node*temp=head->next;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    delete curr->next;
   curr->next=temp;
    return temp;
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
    head=DelFirst(head);
    cout<<"Displaying your circular linked list after Deleting the first Node:\n";
    display(head);
return 0;
}