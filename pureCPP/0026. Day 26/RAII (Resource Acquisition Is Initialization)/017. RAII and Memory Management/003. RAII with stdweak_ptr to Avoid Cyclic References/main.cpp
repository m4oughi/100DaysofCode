#include <iostream>
#include <memory>

struct Node {
    std::shared_ptr<Node> next;
    std::weak_ptr<Node> prev; // Use weak_ptr to avoid cyclic reference
    ~Node() {
        std::cout << "Node destroyed" << std::endl;
    }
};

void cyclicReferenceExample() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>();
    std::shared_ptr<Node> node2 = std::make_shared<Node>();

    node1->next = node2;
    node2->prev = node1; // Weak pointer to prevent cyclic reference

    std::cout << "No cyclic memory leak due to RAII and weak_ptr." << std::endl;
}

int main() {
    cyclicReferenceExample();
    std::cout << "Memory automatically deallocated using RAII." << std::endl;
    return 0;
}
