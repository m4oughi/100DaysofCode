#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteList(Node* head) {
    delete head; // deletes only the head node
}

int main() {
    Node* head = new Node{10, nullptr}; // create head node
    head->next = new Node{20, nullptr}; // create second node

    deleteList(head); // first deletion of head
    deleteList(head); // second deletion of head (Error: undefined behavior)

    return 0;
}
