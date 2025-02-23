#include <iostream>
#include <queue>
#include <vector>

struct Compare {
    bool operator()(int a, int b) {
        return a > b; // Min-Heap
    }
};

int main() {
    std::priority_queue<int, std::vector<int>, Compare> pq;
    pq.push(8);
    pq.push(3);
    pq.push(12);

    std::vector<int> elements;
    while (!pq.empty()) {
        elements.push_back(pq.top());
        pq.pop();
    }

    std::cout << "Iterating over elements in Min-Heap order:\n";
    for (int num : elements) {
        std::cout << num << " ";
    }
    return 0;
}
