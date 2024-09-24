#include <iostream>
#include <list>

struct Node {
    int data;
};

int main() {
    std::list<Node> nodeList;
    nodeList.push_back({1});
    nodeList.push_back({2});
    nodeList.push_back({3});

    for (const auto& node : nodeList) {
        std::cout << "Node data: " << node.data << "\n";
    }

    return 0;
}
