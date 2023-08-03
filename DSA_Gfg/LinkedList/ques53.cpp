// MERGE TWO SORTED LINKED list WITHOUT EXTRA AUXILARY SPACE
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=nullptr;
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
Node*InsertFun(Node*head,int x)
{
    Node*temp=new Node(x);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    Node*curr=head;
    while(curr->next!=nullptr)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
Node*MergeTwolist(Node*head1,Node*head2)
{
   if(head1==NULL)
   {
    return head2;
   }
   if(head2==NULL)
   {
    return head1;
   }
   Node*head=NULL,*tail=NULL;
   if(head1->data<=head2->data)
   {
    head=tail=head1;
    head1=head1->next;
   }
   else
   {
    head=tail=head2;
    head2=head2->next;
   }
}
int main()
{
    Node*head1=nullptr;
    Node*head2=nullptr;
    int n1,n2;
    cout<<"Enter the number of nodes you want to enter in linked list 1 :\n";
    cin>>n1;
    cout<<"Enter the number of nodes you want to enter in linked list 2 :\n";
    cin>>n2;
    cout<<"Enter the numbers of elements of linked list 1 :\n";
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        head1=InsertFun(head1,x);
    }
    cout<<"Enter the numbers of elements of linked list 2 :\n";
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        head2=InsertFun(head2,x);
    }
    cout<<"Displaying your linked list 1 :\n";
    display(head1);
    cout<<"Displaying your linked list 2 :\n";
    display(head2);
    Node*head=MergeTwolist(head1,head2);
    cout<<"Displaying your two sorted list :\n";
    display(head);
return 0;
}