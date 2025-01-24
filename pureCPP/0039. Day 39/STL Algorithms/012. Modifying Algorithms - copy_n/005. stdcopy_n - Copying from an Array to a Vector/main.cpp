#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int source[] = {100, 200, 300, 400, 500};
    std::vector<int> destination(3);

    std::copy_n(source, 3, destination.begin());

    std::cout << "Copied elements: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
