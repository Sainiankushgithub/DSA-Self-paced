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
int SearchLinkedList(Node*head,int value)
{
    int pos=1;
    while(head!=NULL)
    {
        if(head->data==value)
        {
            return pos;
        }
        else
        {
            head=head->next;
            pos++;
        }
    }
    return -1;
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
    int s=SearchLinkedList(head,value);
    if(s==-1)
    {
        cout<<"Linked list element "<<value<<" not found : "<<endl;
    }
    else
    {
        cout<<"Linked list element "<<value<<" found at position : "<<s<<endl;
    }
return 0;
}