#include <iostream>
#include <memory>

class Node {
public:
    std::weak_ptr<Node> next; // use weak_ptr to break circular reference
    ~Node() {
        std::cout << "Node deleted" << std::endl;
    }
};

int main() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>();
    std::shared_ptr<Node> node2 = std::make_shared<Node>();

    node1->next = node2; // node1 points to node2
    node2->next = node1; // node2 weakly points to node1 (no circular reference)

    return 0; // Both nodes are properly deleted now
}
