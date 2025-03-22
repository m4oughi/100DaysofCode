#include <iostream>
#include <memory>
#include <variant>

struct Node;
using NodePtr = std::shared_ptr<Node>;

struct Node {
    int value;
    std::variant<std::monostate, NodePtr> next;
};

void printList(const NodePtr& node) {
    if (!node) return;
    std::cout << node->value << " -> ";
    if (std::holds_alternative<NodePtr>(node->next)) {
        printList(std::get<NodePtr>(node->next));
    } else {
        std::cout << "null\n";
    }
}

int main() {
    auto head = std::make_shared<Node>(Node{1, std::make_shared<Node>(Node{2, {}})});
    printList(head);

    return 0;
}
