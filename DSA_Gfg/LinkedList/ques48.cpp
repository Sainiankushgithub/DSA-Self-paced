// MERGE TWO SORTED LINKED LIST 
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
    cout<<"\n";
}
/* 

Node*InsertFun(Node*head,int x)
{
    Node*temp=new Node(x);
    if(head==nullptr)
    {
        head=temp;
    }
    Node*curr=head;
    while(curr->next!=nullptr)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

*/

Node* MergeTwoList(Node*list1,Node*list2)
{
    Node*Merge_head,*Merge_tail;
    while(list1!=nullptr&&list2!=nullptr)
    {
        if((list1->data)<(list2->data))
        {
            Merge_head=Merge_tail=list1;
            list1=list1->next;
            Merge_tail=Merge_tail->next;
        }
        else
        {
            Merge_tail=list2;
            list2=list2->next;
            Merge_tail=Merge_tail->next;
        }
    }
    while(list1!=nullptr)
    {
        Merge_tail=list1;
        list1=list1->next;
        Merge_tail=Merge_tail->next;
    }
    while(list2!=nullptr)
    {
        Merge_tail=list2;
        list2=list2->next;
        Merge_tail=Merge_tail->next;
    }
    return Merge_head;
}
int main()
{
    /*
    
    Node*head=NULL;
    int n;
    cout<<"Enter the number of Nodes :\n";
    cin>>n;
    cout<<"Enter the number elements of your linked list :\n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        head=InsertFun(head,x);
    }
    
    */

   Node*list1=new Node(10);
   list1->next=new Node(20);
   list1->next->next=new Node(30);
   Node*list2=new Node(15);
   list2->next=new Node(25);
   list2->next->next=new Node(35);
    cout<<"Displaying your list 1 :\n";
    display(list1);
    cout<<"Displaying your list 2 :\n";
    display(list2);
   Node*merge= MergeTwoList(list1,list2);
   cout<<"Displaying the two merged linekd list :\n";
   display(merge);
return 0;
}