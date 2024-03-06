// INSERT FUNCTION IN LINKED LIST 
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
    if(head==nullptr)
    {
        head=temp;
    }
    else
    {
        Node*curr=head;
        while(curr->next!=nullptr)
        {
            curr=curr->next;
        }
        curr->next=temp;
    }
    return head;
}
int main()
{
    Node*head=nullptr;
    int n;
    cout<<"Enter the size of Node :\n";
    cin>>n;
    cout<<"Enter the values of your linked list :\n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        head=InsertFun(head,x);
    }
    cout<<"Displaying your linked list :\n";
    display(head);
return 0;
}