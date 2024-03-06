// MERGE TWO SORTED LINKED list 
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
    Node*Merge_head=nullptr;
    Node*Merge_tail=nullptr;
    if((head1->data)<(head2->data))
    {
        Merge_head=Merge_tail=head1;
        head1=head1->next;
    }
    else
    {
        Merge_head=Merge_tail=head2;
        head2=head2->next;
    }
    while(head1!=nullptr&&head2!=nullptr)
    {
     if((head1->data)<(head2->data))
    {
        Merge_tail->next=head1;
        Merge_tail=Merge_tail->next;
        head1=head1->next;
    }
    else
    {
        Merge_tail->next=head2;
        Merge_tail=Merge_tail->next;
        head2=head2->next;
    } 
    }
    while(head1!=nullptr)
    {
        Merge_tail->next=head1;
        Merge_tail=Merge_tail->next;
        head1=head1->next;
    }
    while(head2!=nullptr)
    {
        Merge_tail->next=head2;
        Merge_tail=Merge_tail->next;
        head2=head2->next;
    }
    return Merge_head;
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