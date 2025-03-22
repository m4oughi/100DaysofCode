#include <iostream>
#include <memory>

struct Node {
    int value;
    std::shared_ptr<Node> next;
    Node(int val) : value(val) {}
};

int main() {
    auto head = std::make_shared<Node>(1);
    head->next = std::make_shared<Node>(2);
    head->next->next = std::make_shared<Node>(3);

    std::shared_ptr<int> aliasPtr(head, &head->next->value); // Alias to second node's value

    std::cout << "Aliased value: " << *aliasPtr << "\n";
    std::cout << "Use count of head: " << head.use_count() << "\n";

    return 0;
}
