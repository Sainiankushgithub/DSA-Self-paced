// INSERT FUNCTION IN LINKED LIST 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};
void display(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void insertfun(Node*head,int x)
{

}
int main()
{
    Node*head;
    int size;
    cout<<"Enter the size of your Node :\n";
    cin>>size;
    cout<<"Enter the numbers of an elements of your linked list \n";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        
    }
return 0;
}