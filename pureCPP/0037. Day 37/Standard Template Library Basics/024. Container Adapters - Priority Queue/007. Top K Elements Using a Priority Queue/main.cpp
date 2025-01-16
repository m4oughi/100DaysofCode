#include <iostream>
#include <queue>
#include <vector>

void topKElements(const std::vector<int>& vec, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    for (int num : vec) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop(); // Keep only top K elements
        }
    }

    std::cout << "Top " << k << " elements: ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> vec = {7, 2, 4, 10, 5, 1};
    int k = 3;
    topKElements(vec, k);

    return 0;
}
