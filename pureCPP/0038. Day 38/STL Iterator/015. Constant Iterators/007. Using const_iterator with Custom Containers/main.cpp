#include <iostream>
#include <vector>

class CustomContainer {
    std::vector<int> data;

public:
    CustomContainer(std::initializer_list<int> values) : data(values) {}

    auto cbegin() const { return data.cbegin(); }
    auto cend() const { return data.cend(); }
};

int main() {
    CustomContainer container = {1, 2, 3, 4, 5};

    std::cout << "Elements in custom container: ";
    for (auto it = container.cbegin(); it != container.cend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
