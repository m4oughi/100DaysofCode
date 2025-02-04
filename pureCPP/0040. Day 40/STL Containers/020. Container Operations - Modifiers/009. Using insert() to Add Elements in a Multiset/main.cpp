#include <iostream>
#include <set>

int main() {
    std::multiset<int> myMultiset = {10, 20, 20, 30};

    // Insert a duplicate element
    myMultiset.insert(20);

    std::cout << "Multiset elements: ";
    for (int n : myMultiset) std::cout << n << " "; // 10 20 20 20 30

    return 0;
}
