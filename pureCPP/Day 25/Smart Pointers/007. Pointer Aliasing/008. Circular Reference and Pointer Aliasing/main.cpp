#include <iostream>
#include <memory>

struct Node {
    int value;
    std::weak_ptr<Node> next;  // Using weak_ptr to avoid circular references
};

int main() {
    auto node1 = std::make_shared<Node>();
    auto node2 = std::make_shared<Node>();

    node1->value = 10;
    node2->value = 20;

    // Creating circular references with weak_ptr to avoid memory leak
    node1->next = node2;
    node2->next = node1;

    // Create an alias pointer to the value of node2
    std::shared_ptr<int> aliasPtr(node2, &node2->value);

    std::cout << "Value of node2 via alias: " << *aliasPtr << std::endl;

    return 0;
}
