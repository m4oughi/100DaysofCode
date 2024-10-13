#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteList(Node*& head) {
    if (head != nullptr) {
        delete head;
        head = nullptr; // set head to null to avoid double deletion
    }
}

int main() {
    Node* head = new Node{10, nullptr}; // create head node
    head->next = new Node{20, nullptr}; // create second node

    deleteList(head); // first deletion of head
    deleteList(head); // second deletion is safe

    return 0;
}
