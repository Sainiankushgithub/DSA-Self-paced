// CHECK PALINDROME 
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
string checkPalindrome(Node*head)
{
    stack<char>s;
    Node*curr=head;
    while(curr!=nullptr)
    {
        s.push(curr->data);
        curr=curr->next;
    }
    while(head!=nullptr)
    {
        if((head->data)!=s.top())
        {
            return "No";
        }
        else
        {
            head=head->next;
            s.pop();
        }
    }
    return "Yes";
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
    if(checkPalindrome(head)=="Yes")
    {
        cout<<"Entered characters are palindrome :\n";
    }
    else
    {
        cout<<"Entered characters are not  palindrome :\n";
    }
return 0;
}