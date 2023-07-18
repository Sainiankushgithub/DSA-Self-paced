// DELETE LAST NODE OF SINGLY LINKED LIST
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};

void deleteLastNode(Node*& head)
{
    if (head==nullptr) {
        cout<<"List is empty. No node to delete.\n";
        return;
    }
    if (head->next==nullptr) {
        // Only one node in the list
        delete head;
        head=nullptr;
        return;
    }
    Node* current=head;
    Node* prev=nullptr;
    while (current->next!=nullptr) {
        prev=current;
        current=current->next;
    }
    prev->next=nullptr;
    delete current;
}
void displayList(const Node* head)
{
    const Node* current = head;
    while (current!=nullptr) {
        cout<<current->data << " ";
        current=current->next;
    }
   cout<<endl;
}
int main()
{
    // Create a sample linked list
    Node* head =new Node{1, nullptr};
    Node* second =new Node{2, nullptr};
    Node* third =new Node{3, nullptr};
    head->next=second;
    second->next = third;
    cout<<"Original List: ";
    displayList(head);
    // Delete the last node
    deleteLastNode(head);
    cout<<"List after deleting last node: ";
    displayList(head);
    // Free the remaining nodes
    delete head;
    delete second;
    return 0;
}