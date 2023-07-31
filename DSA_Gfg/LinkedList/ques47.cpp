// PAIR WISE SWAP NODES IN LINKED LIST 
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
Node*InsertFun(Node*head,int x)
{
    Node*temp=new Node(x);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    Node*curr=head;
    while(curr->next!=nullptr)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
Node* swapPair(Node*head)
{
    Node*curr1=head;
    while(curr1!=nullptr&&curr1->next!=nullptr)
    {
        int temp=curr1->data;
        curr1->data=curr1->next->data;
        curr1->next->data=temp;
        curr1=curr1->next->next;
    }
    return head;
}
int main()
{
    Node*head=nullptr;
    int n;
    cout<<"Enter the number of nodes you want to insert :\n";
    cin>>n;
    cout<<"Enter the numbers of an elements :\n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        head=InsertFun(head,x);
    }
    cout<<"Displaying your linked list :\n";
    display(head);
    head=swapPair(head);
    cout<<"Displaying your linked list after swapping the pair :\n";
    display(head);
return 0;
}