#include <iostream>
#include <memory>
#include <vector>

class Node {
public:
    std::vector<std::shared_ptr<Node>> children;  // Children of the current node
    std::weak_ptr<Node> parent;                   // Parent of the current node (weak reference to avoid cycles)

    Node() {
        std::cout << "Node created" << std::endl;
    }

    ~Node() {
        std::cout << "Node destroyed" << std::endl;
    }
};

int main() {
    auto root = std::make_shared<Node>();
    auto child1 = std::make_shared<Node>();
    auto child2 = std::make_shared<Node>();

    // Establish relationships
    root->children.push_back(child1);
    root->children.push_back(child2);
    child1->parent = root;
    child2->parent = root;

    // All nodes will be properly destroyed when root goes out of scope

    return 0;
}
