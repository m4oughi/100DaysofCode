#include <iostream>
#include <queue>
#include <vector>

void sortUsingPriorityQueue(const std::vector<int>& vec) {
    std::priority_queue<int> pq(vec.begin(), vec.end());

    std::cout << "Sorted elements: ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> vec = {3, 1, 4, 1, 5, 9};
    sortUsingPriorityQueue(vec);

    return 0;
}
