// INTERSECTION OF TWO LINKED LIST METHOD 2
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
Node*IntersectionPoint(Node*head1,Node*head2)
{
    Node*curr1=head1;
    Node*curr2=head2;
    int c1=0,c2=0;
    while(curr1!=nullptr||curr2!=nullptr)
    {
        if(curr1!=nullptr)
        {
            c1++;
            curr1=curr1->next;
        }
        if(curr2!=nullptr)
        {
            c2++;
            curr2=curr2->next;
        }
    }
    int diff=abs(c1-c2);
    curr1=head1;
    curr2=head2;
    if(c1>c2)
    {
        while(diff--)
        {
            curr1=curr1->next;
        }
    }
    else if(c2>c1)
    {
        while(diff--)
        {
            curr2=curr2->next;
        }
    }
    while(curr1!=nullptr&&curr2!=nullptr)
    {
        if(curr1==curr2)
        {
            return curr1;
        }
        else
        {
            curr1=curr1->next;
            curr2=curr2->next;
        }
    }
    return nullptr;
}
int main()
{
    Node*head1=new Node(10);
    head1->next=new Node(6);
    head1->next->next=new Node(13);
    head1->next->next->next=new Node(15);
    head1->next->next->next->next=new Node(20);
    head1->next->next->next->next->next=new Node(30);
    Node*head2=new Node(9);
    head2->next=head1->next->next->next;
    cout<<"Displaying your linked list 1 :\n";
    display(head1);
    cout<<"Displaying your linked list 2 :\n";
    display(head2);
    Node*Intersection=IntersectionPoint(head1,head2);
    if(Intersection==nullptr)
    {
        cout<<"No intersection point in the linked list :\n";
    }
    else
    {
        cout<<"Intersection point in the linked list is : "<<Intersection->data<<endl;
    }
return 0;
}