// N NODE FROM THE END OF LINKED LIST EFFICIENT SOLUTION 
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
void nNodeLinkedlist(Node*head,int n)
{
    if(head==nullptr)
    return;
    Node*first=head;
    for(int i=0;i<n;i++)
    {
        if(first==nullptr)
        {
            return;
        }
        first=first->next;
    }
    Node*second=head;
    while(first!=nullptr)
    {
        second=second->next;
        first=first->next;
    }
    cout<<second->data<<" ";
    cout<<endl;
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next= new Node(40);
    cout<<"Displaying your linked list :\n";
    display(head);
    int n;
    cout<<"Enter the nth number to print the nth node from the end of linked list :\n";
    cin>>n;
    cout<<"Entered element at that position is : ";
    nNodeLinkedlist(head,n);
return 0;
}