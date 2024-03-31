// CHECK PALINDROME EFFICIENT SOLUTION 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    char data;
    Node*next;
    Node(char x)
    {
        data=x;
        next=nullptr;
    }
};
void display(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* InsertFun(Node*head,char x)
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
bool checkPalindrome(Node*head)
{
    if(head==nullptr)
    {
        return 1;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr&&fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node*rev=reverselist(slow->data);
    Node*curr=head;
    while(rev!=nullptr)
    {
        if(rev->data!=curr->data)
        {
            return false;
        }
        rev=rev->next;
        curr=curr->next;
    }
    return true;
}
int main()
{
    Node*head=NULL;
    int n;
    cout<<"Enter the number of nodes :\n";
    cin>>n;
    cout<<"Enter the linked list data :\n";
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        head=InsertFun(head,x);
    }
    cout<<"Displaying the linked list data :\n";
    display(head);
    if(checkPalindrome(head)==1)
    {
        cout<<"Entered characters are palindrome :\n";
    }
    else
    {
        cout<<"Entered characters are not  palindrome :\n";
    }
return 0;
}