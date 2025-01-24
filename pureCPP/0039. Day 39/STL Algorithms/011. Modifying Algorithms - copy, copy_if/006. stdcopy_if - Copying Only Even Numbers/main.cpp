#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5, 6};
    std::vector<int> destination;

    std::copy_if(source.begin(), source.end(), std::back_inserter(destination), [](int x) {
        return x % 2 == 0;
    });

    std::cout << "Even numbers: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
