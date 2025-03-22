#include <iostream>
#include <memory>

struct Node {
    int value;
    std::shared_ptr<Node> next;
    std::weak_ptr<Node> prev; // Breaks cycle

    Node(int val) : value(val) {}
};

int main() {
    auto node1 = std::make_shared<Node>(1);
    auto node2 = std::make_shared<Node>(2);

    node1->next = node2;
    node2->prev = node1; // Weak pointer prevents cycle

    std::cout << "Node1 use count: " << node1.use_count() << '\n';
    std::cout << "Node2 use count: " << node2.use_count() << '\n';

    return 0;
}
