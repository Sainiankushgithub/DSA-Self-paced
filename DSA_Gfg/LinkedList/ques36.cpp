// N NODE FROM THE END OF LINKED LIST NAIVE SOLUTION 
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
    int len=0;
    for( Node*curr=head;curr!=nullptr;curr=curr->next)
    {
        len++;
    }
    if(len<n)
    {
        return;
    }
    Node*curr=head;
    for(int i=0;i<len-n;i++)
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