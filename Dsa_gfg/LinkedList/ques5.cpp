// IMPLEMENTATION OF  INSERT AT THE BEGIN 
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
    Node* temp=new Node(x);
    temp->next=head;
    return temp;
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
   head=BeginFunc(head,30);
   head=BeginFunc(head,20);
   head=BeginFunc(head,10);
   cout<<"Displaying your entered elements : \n";
    display(head);
return 0;
}