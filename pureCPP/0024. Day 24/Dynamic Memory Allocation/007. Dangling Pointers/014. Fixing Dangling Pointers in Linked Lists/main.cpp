#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr}; // create head node
    head->next = new Node{20, nullptr}; // create second node

    delete head->next; // delete the second node
    delete head; // delete the head node, avoiding dangling pointers

    return 0;
}
