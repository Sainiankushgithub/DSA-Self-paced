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
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
bool searchele(Node*head,int value)
{
    if(head==nullptr){
        return false;
    }
    if(head->data==value)
    {
        return true;
    }
    return searchele(head->next,value);
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    cout<<"Displaying your list elements :\n";
    display(head);
    if(searchele(head,20))
    {
        cout<<"Element found : "<<endl;
    }
    else
    {
        cout<<"Element not found : "<<endl;
    }
return 0;
}