#include <iostream>
#include <memory>
#include <vector>

class Node {
public:
    std::vector<std::shared_ptr<Node>> children;  // Children nodes (strong ownership)
    std::weak_ptr<Node> parent;  // Parent node (weak ownership)

    ~Node() { std::cout << "Node destroyed" << std::endl; }
};

int main() {
    std::shared_ptr<Node> root = std::make_shared<Node>();

    std::shared_ptr<Node> child1 = std::make_shared<Node>();
    std::shared_ptr<Node> child2 = std::make_shared<Node>();

    root->children.push_back(child1);
    root->children.push_back(child2);

    child1->parent = root;  // Weak reference to parent (no ownership)
    child2->parent = root;  // Weak reference to parent (no ownership)

    return 0;
}
