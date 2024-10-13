#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr}; // dynamically allocate a Node
    head->next = new Node{20, nullptr}; // dynamically allocate the next Node
    head->next->next = new Node{30, nullptr}; // dynamically allocate another Node

    Node* ptr = head; // pointer to the head of the list
    cout << "Linked list elements using pointer arithmetic: ";
    while (ptr != nullptr) {
        cout << ptr->data << " "; // access data using pointer
        ptr = ptr->next; // move to the next node
    }
    cout << endl;

    // Deallocate memory for nodes
    ptr = head;
    while (ptr != nullptr) {
        Node* temp = ptr;
        ptr = ptr->next;
        delete temp;
    }

    return 0;
}
