// INSERT AT END IN SINGLY LINKED LIST
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
Node* InsertEnd(Node* head,int x)
{
    Node* temp=new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    Node* curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
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
    Node*head=NULL;
   head=InsertEnd(head,30);
   head=InsertEnd(head,20);
   head=InsertEnd(head,10);
   cout<<"Displaying your entered elements : \n";
    display(head);
return 0;
}