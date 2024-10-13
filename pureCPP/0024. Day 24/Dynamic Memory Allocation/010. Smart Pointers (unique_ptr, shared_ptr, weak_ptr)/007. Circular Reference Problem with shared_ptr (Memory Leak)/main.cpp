#include <iostream>
#include <memory>

class Node {
public:
    std::shared_ptr<Node> next; // circular reference using shared_ptr
    ~Node() {
        std::cout << "Node deleted" << std::endl;
    }
};

int main() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>();
    std::shared_ptr<Node> node2 = std::make_shared<Node>();

    node1->next = node2; // node1 points to node2
    node2->next = node1; // node2 points back to node1 (circular reference)

    return 0; // Memory leak, because circular reference keeps both nodes alive
}
