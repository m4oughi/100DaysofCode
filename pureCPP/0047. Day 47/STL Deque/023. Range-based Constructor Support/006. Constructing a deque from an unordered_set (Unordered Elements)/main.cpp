#include <iostream>
#include <deque>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {3, 1, 4, 2, 5};

    // Construct deque from unordered_set
    std::deque<int> dq(uset.begin(), uset.end());

    std::cout << "Deque from unordered_set: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
