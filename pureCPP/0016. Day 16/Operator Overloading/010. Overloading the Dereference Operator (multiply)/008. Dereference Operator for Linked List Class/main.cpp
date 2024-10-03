#include <iostream>
using namespace std;

class Node {
    int value;
    Node* next;
public:
    Node(int v) : value(v), next(nullptr) {}

    // Overload dereference operator
    int& operator*() {
        return value;
    }

    void setNext(Node* n) {
        next = n;
    }

    Node* getNext() const {
        return next;
    }
};

int main() {
    Node n1(10);
    Node n2(20);
    n1.setNext(&n2);

    cout << *n1 << endl;  // Output: 10
    cout << *n1.getNext() << endl;  // Output: 20

    return 0;
}
