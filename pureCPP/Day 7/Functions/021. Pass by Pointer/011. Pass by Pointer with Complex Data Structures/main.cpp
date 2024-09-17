#include <iostream>

struct Node {
    int data;
    Node* next;
};

void appendNode(Node** head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList(Node* head) {
    while (head) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;
    appendNode(&head, 1);
    appendNode(&head, 2);
    appendNode(&head, 3);

    printList(head);  // Output: 1 2 3

    // Clean up
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
