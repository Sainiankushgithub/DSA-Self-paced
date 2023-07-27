// SORTED INSERT IN SINGLY LINKED LIST 
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
Node*sortInsert(Node*head,int x)
{
    Node*temp=new Node(x);
    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }
    Node*curr=head;
    while(curr->next!=nullptr)
    {
        if((curr->next->data)>x)
        {
            temp->next=curr->next;
            curr->next=temp;
            return head;
        }
        else
        {
            curr=curr->next;
        }
    }
        curr->next=temp;
        temp->next=NULL;
        return head;
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    cout<<"Displaying your linked list before inserting the element :\n";
    display(head);
    int ele;
    cout<<"Enter the element which you want to insert in your sorted linked list :\n";
    cin>>ele;
    cout<<"Displaying your linked after inserting the element :\n";
    head=sortInsert(head,ele);
    display(head);
return 0;
}