#include <iostream>
#include <set>

int main() {
    std::set<int> uniqueNumbers = {4, 1, 3, 2, 5};

    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }

    return 0;
}
