#include <iostream>
#include <deque>
#include <utility>  // For std::swap

int main() {
    std::deque<char> dq1 = {'A', 'B', 'C'};
    std::deque<char> dq2 = {'X', 'Y', 'Z'};

    std::swap(dq1, dq2);

    std::cout << "dq1 after swap: ";
    for (char ch : dq1) std::cout << ch << " ";
    std::cout << "\ndq2 after swap: ";
    for (char ch : dq2) std::cout << ch << " ";

    return 0;
}
