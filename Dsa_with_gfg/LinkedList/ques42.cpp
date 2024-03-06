// REMOVE DUPLICATE FROM THE SORTED SINGLY LINKED LIST 
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
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void RemoveDup(Node*head)
{
    Node*curr=head;
    while(curr!=NULL&&curr->next!=NULL)
    {
        if((curr->data)==(curr->next->data))
        {
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else
        {
            curr=curr->next;
        }
    }
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    head->next->next->next=new Node(20);
    head->next->next->next->next=new Node(30);
    head->next->next->next->next->next= new Node(40);
    head->next->next->next->next->next->next= new Node(40);
    cout<<"Displaying your linked list :\n";
    display(head);
    cout<<"Displaying the singly linked list after removing the duplicates :\n";
    RemoveDup(head);
    display(head);
return 0;
}