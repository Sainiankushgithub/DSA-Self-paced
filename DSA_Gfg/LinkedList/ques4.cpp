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
    }
}
int main()
{
return 0;
}
