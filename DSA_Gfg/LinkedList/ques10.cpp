// SEARCH IN A LINKED LIST 
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
bool searchLinkedList(Node* head,int value) {
    Node* current=head;
    while (current!=nullptr) {
        if (current->data==value) {
            return true;
        }
        current = current->next;
    }
    return false;
}
int main() {
    Node* node1 =new Node();
    Node* node2 =new Node();
    Node* node3 =new Node();
    node1->data=10;
    node2->data=20;
    node3->data=30;
    node1->next=node2;
    node2->next=node3;
    node3->next=nullptr;
    int value = 20;
    if (searchLinkedList(node1,value)) {
        cout<<"Value " << value<<" found in the linked list."<<endl;
    } else {
        cout<<"Value " << value<<" not found in the linked list."<<endl;
    }
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
