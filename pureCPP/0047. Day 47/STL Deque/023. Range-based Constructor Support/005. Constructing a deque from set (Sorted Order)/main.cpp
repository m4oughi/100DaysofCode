#include <iostream>
#include <deque>
#include <set>

int main() {
    std::set<int> mySet = {40, 10, 30, 20, 50}; // Set stores elements in sorted order

    // Construct deque from set
    std::deque<int> dq(mySet.begin(), mySet.end());

    std::cout << "Deque from set: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
