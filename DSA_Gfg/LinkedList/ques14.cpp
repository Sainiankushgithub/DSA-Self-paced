// INSERT AT THE FIRST IN DOUBLY LINKED LIST 
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
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
int main()
{

    // ONE WAY OF INITIALSING THE HEAD POINTER 


    // Node *head=new Node(10);
    // Node*temp1=new Node(20);
    // Node*temp2=new Node(30);
    // head->next=temp1;
    // temp1->prev=head;
    // temp1->next=temp2;
    // temp2->prev=temp1;

    // ANOTHER WAY 

    Node*head=nullptr;
    head=new Node(10);
    head->next=new Node(20);
    head->next->prev=head;
    head->next->next=new Node(30);
    head->next->next->prev=head->next;
    cout<<"Displaying your linked list :\n";
    display(head);
return 0;
}