#include <iostream>
#include <memory>

class Node {
public:
    int value;
    std::shared_ptr<Node> next;  // Shared ownership of the next node
    std::weak_ptr<Node> prev;    // Weak reference to the previous node

    Node(int val) : value(val) {}
    ~Node() { std::cout << "Node " << value << " destroyed" << std::endl; }
};

int main() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>(1);
    std::shared_ptr<Node> node2 = std::make_shared<Node>(2);

    node1->next = node2;  // node1 owns node2
    node2->prev = node1;  // node2 weakly points to node1

    // No cyclic dependency, memory is properly managed
    return 0;
}
