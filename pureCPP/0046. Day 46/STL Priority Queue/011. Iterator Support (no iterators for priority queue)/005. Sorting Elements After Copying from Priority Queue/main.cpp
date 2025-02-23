#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int main() {
    std::priority_queue<int> pq;
    pq.push(35);
    pq.push(15);
    pq.push(25);

    std::vector<int> elements;
    
    while (!pq.empty()) {
        elements.push_back(pq.top());
        pq.pop();
    }

    std::sort(elements.begin(), elements.end()); // Sorting elements

    std::cout << "Sorted elements:\n";
    for (int num : elements) {
        std::cout << num << " ";
    }
    return 0;
}
