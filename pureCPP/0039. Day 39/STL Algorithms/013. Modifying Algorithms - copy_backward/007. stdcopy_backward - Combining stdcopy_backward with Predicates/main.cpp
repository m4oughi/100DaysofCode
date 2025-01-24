#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5, 6};
    std::vector<int> filtered;
    std::vector<int> destination(3);

    // Filter even numbers
    std::copy_if(source.begin(), source.end(), std::back_inserter(filtered), [](int x) {
        return x % 2 == 0;
    });

    // Copy filtered elements backward
    std::copy_backward(filtered.begin(), filtered.end(), destination.end());

    std::cout << "Destination vector: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
