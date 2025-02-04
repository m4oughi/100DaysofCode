#include <iostream>
#include <queue>
#include <vector>

void findKLargest(std::vector<int> arr, int k) {
    std::priority_queue<int> pq(arr.begin(), arr.end());

    std::cout << "Top " << k << " largest elements: ";
    for (int i = 0; i < k; i++) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> arr = {7, 10, 4, 3, 20, 15};
    findKLargest(arr, 3); // Output: 20 15 10

    return 0;
}
