// IMPLEMENTATION OF BEGIN FUNCTION 
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
Node* BeginFunc(Node* head,int x)
{
    
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
    head->next->next->next=new Node(40);
    cout<<"Displaying your singly linked list data using recursion : \n";
    display(head);
return 0;
}