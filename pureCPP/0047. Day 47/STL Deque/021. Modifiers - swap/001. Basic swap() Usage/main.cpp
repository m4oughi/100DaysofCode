#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq1 = {1, 2, 3};
    std::deque<int> dq2 = {4, 5, 6};

    std::cout << "Before swap:\n";
    std::cout << "dq1: ";
    for (int num : dq1) std::cout << num << " ";
    std::cout << "\ndq2: ";
    for (int num : dq2) std::cout << num << " ";
    
    dq1.swap(dq2);

    std::cout << "\n\nAfter swap:\n";
    std::cout << "dq1: ";
    for (int num : dq1) std::cout << num << " ";
    std::cout << "\ndq2: ";
    for (int num : dq2) std::cout << num << " ";
    
    return 0;
}
