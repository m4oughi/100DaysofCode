#include <iostream>
#include <queue>
#include <vector>

void sortDescending(std::vector<int>& arr) {
    std::priority_queue<int> pq(arr.begin(), arr.end());

    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> arr = {5, 1, 8, 3, 2};
    sortDescending(arr); // Output: 8 5 3 2 1

    return 0;
}
