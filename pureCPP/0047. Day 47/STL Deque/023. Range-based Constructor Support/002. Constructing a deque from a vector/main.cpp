#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::vector<int> vec = {5, 10, 15, 20, 25};

    // Construct deque from vector
    std::deque<int> dq(vec.begin(), vec.end());

    std::cout << "Deque from vector: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
