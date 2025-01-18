#include <iostream>
#include <vector>

class CustomContainer {
    std::vector<int> data;

public:
    CustomContainer(std::initializer_list<int> values) : data(values) {}

    auto begin() { return data.begin(); }
    auto end() { return data.end(); }
};

int main() {
    CustomContainer container = {1, 2, 3, 4, 5};

    for (auto it = container.begin(); it != container.end(); ++it) {
        *it += 10; // Modify elements
    }

    std::cout << "Modified custom container: ";
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
