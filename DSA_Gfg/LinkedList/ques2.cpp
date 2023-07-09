// IMPLEMENTING THE LINKED LIST IMPROVED MANNER
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    string name;
    Node* next;
    Node(string x)
    {
        name=x;
        next=NULL;
    }
};
void PrintList(Node *head)
{
    Node*curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->name)<<endl;
        curr=curr->next;
    }
}
int main()
{
    Node* head=new Node("Ankush");
    head->next=new Node("Saini");
    head->next->next=new Node("Anku");
    cout<<"Displaying your data : \n";
    PrintList(head);
return 0;
}