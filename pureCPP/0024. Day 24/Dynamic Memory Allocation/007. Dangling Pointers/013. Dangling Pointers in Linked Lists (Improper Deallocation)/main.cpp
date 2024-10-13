#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr}; // create head node
    head->next = new Node{20, nullptr}; // create second node

    delete head; // head is deleted, but head->next still points to the second node

    cout << "Accessing next node (Dangling pointer): " << head->next->data << endl; // Undefined behavior

    return 0;
}
