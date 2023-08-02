// CONVERT BINARY LINKED LIST INTO INTEGER 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    bool data;
    Node*next;
    Node(bool x)
    {
        data=x;
        next=nullptr;
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
Node* InsertFun(Node*head,bool x)
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
int conversionB(Node*head)
{
    int res1,res2=0;
    while(head!=nullptr)
    {
        res1+=(pow(2,res2))*(head->data);
        head=head->next;
        res2++;
    }
    return res1;
}
int main()
{
    Node*head=NULL;
    int n;
    cout<<"Enter the number of nodes :\n";
    cin>>n;
    cout<<"Enter the linked list data :\n";
    for(int i=0;i<n;i++)
    {
        bool x;
        cin>>x;
        head=InsertFun(head,x);
    }
    cout<<"Displaying the linked list data :\n";
    display(head);
    cout<<"Binary conversion of your linked list into integer is : "<<conversionB(head);
return 0;
}