#include <iostream>
#include <queue>
#include <vector>

struct CustomCompare {
    bool operator()(int a, int b) {
        return a < b; // Reversed for descending order
    }
};

int main() {
    std::priority_queue<int, std::vector<int>, CustomCompare> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    std::cout << "Elements in descending order:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
