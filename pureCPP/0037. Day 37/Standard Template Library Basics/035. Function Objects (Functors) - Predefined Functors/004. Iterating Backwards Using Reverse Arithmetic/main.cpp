#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    auto it = vec.end(); // Points just past the last element
    while (it != vec.begin()) {
        --it; // Move backward
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}
