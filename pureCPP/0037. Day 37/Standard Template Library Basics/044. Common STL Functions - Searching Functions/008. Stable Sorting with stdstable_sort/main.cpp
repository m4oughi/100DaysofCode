#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    int count = std::count_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }); // Count even numbers
    std::cout << "Number of even numbers: " << count << "\n";

    return 0;
}
