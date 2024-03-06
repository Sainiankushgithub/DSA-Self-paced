// INTERSECTION OF TWO LINKED LIST METHOD 1
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
    unordered_set<Node*>hash;
    while(head1!=nullptr)
    {
        hash.insert(head1);
        head1=head1->next;
    }
    while(head2!=nullptr)
    {
        if(hash.find(head2)!=hash.end())
        {
            return head2;
        }
        else
        {
            head2=head2->next;
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