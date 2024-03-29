// TRAVERSING SINGLY LINKED LIST USING RECURSION
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
void PrintList(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<(head->data)<<endl;
    head=head->next;
    PrintList(head);
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<"Displaying your singly linked list data using recursion : \n";
    PrintList(head);
return 0;
}