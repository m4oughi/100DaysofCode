#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 15, 25, 40, 50};

    auto it = std::find_if(vec.begin(), vec.end(), [](int x) { return x > 20; }); // Find first element > 20
    if (it != vec.end())
        std::cout << "First element greater than 20 is: " << *it << "\n";
    else
        std::cout << "No element found\n";

    return 0;
}
