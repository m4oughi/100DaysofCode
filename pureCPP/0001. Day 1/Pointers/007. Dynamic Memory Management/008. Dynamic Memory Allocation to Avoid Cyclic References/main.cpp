#include <iostream>
#include <memory>

class Node {
public:
    std::shared_ptr<Node> next;  // Shared ownership of the next node
    std::weak_ptr<Node> prev;    // Weak ownership of the previous node (to avoid cyclic references)

    Node() {
        std::cout << "Node created" << std::endl;
    }

    ~Node() {
        std::cout << "Node destroyed" << std::endl;
    }
};

int main() {
    auto node1 = std::make_shared<Node>();
    auto node2 = std::make_shared<Node>();

    node1->next = node2;
    node2->prev = node1;  // Use weak_ptr to prevent cyclic reference

    return 0;
}
