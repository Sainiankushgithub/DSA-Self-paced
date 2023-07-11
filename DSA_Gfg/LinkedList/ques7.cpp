// INSERT AT THE GIVEN POSITION IN SINGLY LINKED LIST 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node* Givenpos(Node* head,int x,int pos)
{
    Node*temp=new Node(x);
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    Node* curr=head;
    for(int i=1;i<=pos-2&&curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    {
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void display(Node*head)
{
    Node*temp=head;
    while(temp!=nullptr)
    {
        cout<<(temp->data)<<endl;
        temp=temp->next;
    }
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    int pos;
    cout<<"Enter the position where you want to insert : \n";
    cin>>pos;
    head=Givenpos(head,25,pos);
   cout<<"Displaying your entered elements : \n";
    display(head);
return 0;
}