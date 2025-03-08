#include <iostream>
#include <deque>
#include <vector>

void slidingWindowMax(const std::vector<int>& nums, int k) {
    std::deque<int> dq;
    for (int i = 0; i < nums.size(); ++i) {
        // Remove elements outside the window
        while (!dq.empty() && dq.front() <= i - k) dq.pop_front();

        // Remove smaller elements inside window
        while (!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();

        // Insert current index
        dq.push_back(i);

        // Print max element in window
        if (i >= k - 1)
            std::cout << nums[dq.front()] << " ";
    }
}

int main() {
    std::vector<int> nums = {1, 3, 1, 2, 0, 5};
    int k = 3;
    slidingWindowMax(nums, k);
    return 0;
}
