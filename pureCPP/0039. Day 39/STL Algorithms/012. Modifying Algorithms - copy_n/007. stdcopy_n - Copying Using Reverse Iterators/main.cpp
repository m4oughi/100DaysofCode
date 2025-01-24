#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {10, 20, 30, 40, 50};
    std::vector<int> destination(3);

    std::copy_n(source.rbegin(), 3, destination.begin());

    std::cout << "Copied in reverse order: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
