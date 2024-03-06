// RECURSIVE SEARCH IN LINKED LIST 
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
void display(Node*head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    display(head->next);
}
int searchele(Node*head,int value)
{
    if(head==nullptr)
    {
        return -1;
    }
    if(head->data==value)
    {
        return 1;
    }
    else
    {
        int res=searchele(head->next,value);
        if(res==-1)
        {
            return -1;
        }
        else{
            return (res+1);
        }
    }
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    cout<<"Displaying your linked list :\n";
    display(head);
    int value;
    cout<<"Enter the value to search whether it is present or not :\n";
    cin>>value;
    int res=searchele(head,value);
    if(res==-1)
    {
        cout<<"Elemetn "<<value<<" not found "<<endl;
    }
    else
    {
        cout<<"Elemetn "<<value<<"  found at position "<<res<<endl;
    }
return 0;
}