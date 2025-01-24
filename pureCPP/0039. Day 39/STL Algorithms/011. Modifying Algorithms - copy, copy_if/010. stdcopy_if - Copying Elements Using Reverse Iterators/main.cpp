#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5, 6};
    std::vector<int> destination;

    std::copy_if(source.rbegin(), source.rend(), std::back_inserter(destination), [](int x) {
        return x > 3;
    });

    std::cout << "Copied elements > 3 in reverse order: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
