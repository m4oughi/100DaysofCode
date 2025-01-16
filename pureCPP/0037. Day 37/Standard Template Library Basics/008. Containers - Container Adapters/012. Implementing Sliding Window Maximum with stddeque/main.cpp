#include <iostream>
#include <deque>
#include <vector>

void slidingWindowMax(const std::vector<int> &arr, int k) {
    std::deque<int> d;
    for (int i = 0; i < arr.size(); ++i) {
        if (!d.empty() && d.front() == i - k) {
            d.pop_front(); // Remove elements out of the window
        }
        while (!d.empty() && arr[d.back()] <= arr[i]) {
            d.pop_back(); // Maintain elements in decreasing order
        }
        d.push_back(i);
        if (i >= k - 1) {
            std::cout << arr[d.front()] << " "; // Print max of current window
        }
    }
}

int main() {
    std::vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    slidingWindowMax(arr, k);
    return 0;
}
