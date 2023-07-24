// INSERT AT THE BEGIN IN CIRCULAR LINKED LIST EFFICIENT SOLUTION 
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
Node*InsertBegin(Node*head,int x)
{
    Node*temp=new Node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
       
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
    head=InsertBegin(head,5);
    cout<<"Displaying your circular linked list after inserting at the first :\n";
    display(head);
return 0;
}