#include <iostream>
#include <memory>

class Node {
public:
    std::shared_ptr<Node> next;
    std::weak_ptr<Node> prev;  // Use weak_ptr to avoid memory leak due to circular reference
    ~Node() { std::cout << "Node destroyed" << std::endl; }
};

int main() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>();
    std::shared_ptr<Node> node2 = std::make_shared<Node>();

    node1->next = node2;
    node2->prev = node1;  // Using weak_ptr to avoid circular dependency

    // Both nodes will be destroyed automatically when shared_ptr goes out of scope
    return 0;
}
