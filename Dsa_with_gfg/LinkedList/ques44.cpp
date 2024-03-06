// SEGREGATE EVEN AND ODD IN LINKED LIST
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
Node*SegEvenOdd(Node*head)
{
    Node*Even_head=NULL;
    Node*Even_tail=NULL;
    Node*Odd_head=NULL;
    Node*Odd_tail=NULL;
    while(head!=nullptr)
    {
        if((head->data)%2==0)
        {
            if(Even_head==nullptr)
            {
                Even_head=Even_tail=head;
            }
            else
            {
                Even_tail->next=head;
                Even_tail=Even_tail->next;
            }
        }
        else
        {
            if(Odd_head==nullptr)
            {
                Odd_head=Odd_tail=head;
            }
            else
            {
                Odd_tail->next=head;
                Odd_tail=Odd_tail->next;
            }
        }
        head=head->next;
    }
    if(Even_head!=nullptr)
    {
        Even_tail->next=Odd_head;
        head=Even_head;
    }
    else
    {
        head=Odd_head;
    }
    if(Odd_tail!=nullptr)
    {
        Odd_tail->next=nullptr;
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
    head=SegEvenOdd(head);
    cout<<"Displaying after segregating even and odd :\n";
    display(head);
return 0;
}