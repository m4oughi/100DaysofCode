#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    Node* current = head;
    while (current != nullptr) {
        std::cout << "Data: " << current->data << std::endl;
        Node* temp = current;
        current = current->next;
        delete temp; // Free each node
    }

    return 0;
}
