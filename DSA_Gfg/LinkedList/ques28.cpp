// DELETE KTH NODE FROM CIRCUALR LINKED LIST 
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
Node*DelKNode(Node*head,int k)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(k==1)
    {
         delete head;
         return nullptr;
    }
    Node*curr=head;
    for(int i=0;i<k-2;i++)
    {
        curr=curr->next;
    }
    curr->next=curr->next->next;
    return head;
}
int main()
{
    // FOR NULL CASE 
    // Node*head=NULL;
    
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    cout<<"Displaying your doubly linked list :\n";
    display(head);
    int k;
    cout<<"Enter the kth node to be deleted :\n";
    cin>>k;
    head=DelKNode(head,k);
    cout<<"Displaying your circular linked list after Deleting the first Node:\n";
    display(head);
return 0;
}