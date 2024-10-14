#include <iostream>
#include <memory>

class Node {
public:
    std::shared_ptr<Node> next;
    std::weak_ptr<Node> prev;  // Using `std::weak_ptr` to avoid cyclic reference.
    
    ~Node() {
        std::cout << "Node destroyed." << std::endl;
    }
};

int main() {
    {
        std::shared_ptr<Node> node1 = std::make_shared<Node>();
        std::shared_ptr<Node> node2 = std::make_shared<Node>();
        
        node1->next = node2;
        node2->prev = node1;  // Avoid cyclic reference by using `std::weak_ptr`.
    }  // Both nodes are destroyed, preventing memory leaks.
}
