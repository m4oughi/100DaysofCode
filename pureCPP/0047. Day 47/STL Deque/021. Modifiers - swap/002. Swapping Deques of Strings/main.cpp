#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> dq1 = {"Hello", "World"};
    std::deque<std::string> dq2 = {"STL", "Deque"};

    dq1.swap(dq2);

    std::cout << "After swap:\n";
    std::cout << "dq1: ";
    for (const auto& word : dq1) std::cout << word << " ";
    std::cout << "\ndq2: ";
    for (const auto& word : dq2) std::cout << word << " ";
    
    return 0;
}
