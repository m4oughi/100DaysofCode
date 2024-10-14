#include <iostream>
#include <memory>

struct Node {
    int id;
    std::shared_ptr<Node> child;
};

int main() {
    // Create a node with a child
    std::shared_ptr<Node> parent = std::make_shared<Node>();
    parent->id = 1;
    parent->child = std::make_shared<Node>();
    parent->child->id = 2;

    // Alias the child node but share ownership with the parent
    std::shared_ptr<Node> aliasChild(parent, parent->child.get());

    std::cout << "Parent ID: " << parent->id << std::endl;
    std::cout << "Child ID via alias: " << aliasChild->id << std::endl;

    // Both aliasChild and parent share ownership of the entire parent-child structure
    return 0;
}
