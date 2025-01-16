#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4, 2, 5};

    int count = std::count(vec.begin(), vec.end(), 2); // Count occurrences of 2
    std::cout << "Number of occurrences of 2: " << count << "\n";

    return 0;
}
