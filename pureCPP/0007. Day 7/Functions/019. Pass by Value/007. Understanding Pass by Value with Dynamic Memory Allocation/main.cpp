#include <iostream>

class Node {
public:
    int* data;
    
    Node(int value) {
        data = new int(value);
    }
    
    ~Node() {
        delete data;
    }
};

void modifyNode(Node n) {
    *(n.data) = 100;  // Modifies the copy's data
}

int main() {
    Node node(10);
    modifyNode(node);
    std::cout << "Node data after modification: " << *(node.data) << std::endl;  // The original data is modified
    return 0;
}
