// DELETE FIRST NODE OF SINGLY LINKED LIST
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};

void deleteFirstNode(Node*& head)
{
    if (head==nullptr) {
        cout<<"List is empty. No node to delete.\n";
        return;
    }

    Node* temp=head;
    head=head->next;

    delete temp;
}

void displayList(const Node* head)
{
    const Node* current=head;

    while (current!=nullptr) {
        cout << current->data << " ";
        current=current->next;
    }
    cout<<endl;
}

int main()
{
    // Create a sample linked list
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    head->next=second;
    second->next=third;

    cout<<"Original List: ";
    displayList(head);

    // Delete the first node
    deleteFirstNode(head);

    cout<<"List after deleting first node: ";
    displayList(head);

    // Free the remaining nodes
    delete head;
    delete second;
    delete third;

    return 0;
}