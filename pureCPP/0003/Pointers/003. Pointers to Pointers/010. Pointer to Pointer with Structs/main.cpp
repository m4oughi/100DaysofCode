#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};  // Create first node
    Node* second = new Node{20, nullptr};  // Create second node
    head->next = second;  // Link first node to second node

    Node** pptr = &head;  // Pointer to pointer pointing to 'head'

    // Adding a new node using pointer to pointer
    Node* newNode = new Node{30, nullptr};
    (*pptr)->next = newNode;

    // Cleanup dynamically allocated memory
    delete head;
    delete second;
    delete newNode;

    return 0;
}
