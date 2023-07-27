// REVERSE A LINKED LIST EFFICIENT SOLUTION 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=nullptr;
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
Node*ReverseLinkedList(Node*head)
{
    Node*curr=head;
    
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next= new Node(40);
    cout<<"Displaying your linked list :\n";
    display(head);
    head=ReverseLinkedList(head);
    cout<<"Displaying your linked list in Reverse order :\n";
    display(head);
return 0;
}