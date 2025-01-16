#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    int count = std::count_if(vec.begin(), vec.end(), [](int x) { return x > 2; });
    std::cout << "Number of elements greater than 2: " << count << "\n";

    return 0;
}
