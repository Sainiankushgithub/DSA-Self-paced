// SEARCH IN A LINKED LIST 
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    Node*next;
    int data;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
bool SearchLinkedList(Node*head,int value)
{
    Node*curr=head;
    while(curr!=NULL)
    {
        if(curr->data==value)
        {
            return true;
        }
        curr=curr->next;
    }
    return false;
}
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
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    cout<<"Displaying your linked list elements :\n";
    display(head);
    int value;
    cout<<"Enter the value to be search :\n";
    cin>>value;
    if(SearchLinkedList(head,value))
    {
        cout<<"Linked list element found : "<<value<<endl;
    }
    else
    {
        cout<<"Linked list element not found : "<<value<<endl;
    }
return 0;
}