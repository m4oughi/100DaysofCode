#include <iostream>
#include <memory>

class Node {
public:
    std::shared_ptr<Node> next;
    std::weak_ptr<Node> prev;

    ~Node() { std::cout << "Node destroyed" << std::endl; }
};

int main() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>();
    std::shared_ptr<Node> node2 = std::make_shared<Node>();

    node1->next = node2;   // node1 holds a shared_ptr to node2
    node2->prev = node1;   // node2 holds a weak_ptr to node1

    std::cout << "End of main" << std::endl;

    return 0;
}
