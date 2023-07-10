// IMPLEMENTATION OF INSERT FUNCTION
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
Node* InsertFunc(Node* head,int x)
{
    Node* newnode=new Node(x);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
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
    Node*head=nullptr;
    int n;
    cout<<"Enter the number of node\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        head=InsertFunc(head,x);
    }
    cout<<"Displaying your data : \n";
    display(head);
return 0;
}
