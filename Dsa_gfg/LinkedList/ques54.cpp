// COPY LIST WITH RANDOM POINTER
#include<bits/stdc++.h>
using namespace std;
class ListNode
{
  public:
  int val;
  ListNode*next;
  ListNode*random;
  ListNode(int val):val(val),next(NULL),random(NULL){}
  ListNode*createList(ListNode*head,int x)
  {
    if(head==NULL)
    {
      head=new ListNode(x);
      return head;
    }
    else
    {
      ListNode*curr=head;
      while(curr->next!=NULL)
      {
        curr=curr->next;
      }
      curr->next=new ListNode(x);
      return head;
    }
  }
  ListNode*copyRandomList(ListNode*head)
  {
    
  }
  void Display(ListNode*head)
  {
    ListNode*curr=head;
    while(curr!=NULL)
    {
      cout<<curr->val<<"->";
      curr=curr->next;
    }
    cout<<"NULL\n";
  }
};
int main()
{
  int nodes;
  cout<<"Enter the number of nodes\n";
  cin>>nodes;
  ListNode list(0);
  ListNode*head=NULL;
  cout<<"Enter the values of each node\n";
  for(int i=0;i<nodes;i++)
  {
    int x;
    cin>>x;
    head=list.createList(head,x);
  }
  cout<<"Displaying your List\n";
  list.Display(head);


  ListNode*copyList=NULL;
  copyList=list.copyRandomList(head);

  cout<<"Displaying the copy list\n";
  list.Display(copyList);
return 0;
}