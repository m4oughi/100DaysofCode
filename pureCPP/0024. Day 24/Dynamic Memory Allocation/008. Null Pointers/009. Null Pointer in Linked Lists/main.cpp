#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = nullptr; // initialize null pointer for the head of the list

    // Create first node
    head = new Node{10, nullptr}; // dynamically allocate memory for the first node
    head->next = new Node{20, nullptr}; // second node

    // Traverse the list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free memory
    delete head->next;
    delete head;

    return 0;
}
