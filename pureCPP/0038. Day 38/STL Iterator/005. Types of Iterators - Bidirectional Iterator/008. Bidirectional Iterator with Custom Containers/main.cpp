#include <iostream>
#include <vector>

class CustomContainer {
    std::vector<int> data;

public:
    CustomContainer(std::initializer_list<int> init) : data(init) {}

    auto begin() { return data.begin(); }
    auto end() { return data.end(); }
    auto rbegin() { return data.rbegin(); }
    auto rend() { return data.rend(); }
};

int main() {
    CustomContainer container = {10, 20, 30, 40};

    std::cout << "Forward iteration: ";
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << "\nBackward iteration: ";
    for (auto it = container.rbegin(); it != container.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
