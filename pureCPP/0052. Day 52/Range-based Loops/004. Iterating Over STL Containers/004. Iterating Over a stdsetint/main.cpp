#include <iostream>
#include <set>

int main() {
    std::set<int> uniqueNumbers = {5, 1, 4, 2, 3};

    for (int num : uniqueNumbers) { // Set maintains sorted order
        std::cout << num << " ";
    }

    return 0;
}
