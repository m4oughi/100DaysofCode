#include <iostream>
#include <deque>
#include <algorithm>
#include <random>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5, 6, 7, 8};

    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(dq.begin(), dq.end(), g);

    std::cout << "Shuffled deque: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
