#include <iostream>
#include <memory>

class Node {
public:
    std::shared_ptr<Node> next;
    std::weak_ptr<Node> prev;  // Use weak_ptr to avoid cyclic references

    ~Node() {
        std::cout << "Node destroyed" << std::endl;
    }
};

int main() {
    auto node1 = std::make_shared<Node>();
    auto node2 = std::make_shared<Node>();

    node1->next = node2;
    node2->prev = node1;  // Prevent cyclic reference by using weak_ptr

    // Nodes are destroyed when the last shared_ptr is destroyed
    return 0;
}
