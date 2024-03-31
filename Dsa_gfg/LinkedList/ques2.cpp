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
    while(head!=NULL)
    {
        cout<<(head->name)<<endl;
        head=head->next;
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