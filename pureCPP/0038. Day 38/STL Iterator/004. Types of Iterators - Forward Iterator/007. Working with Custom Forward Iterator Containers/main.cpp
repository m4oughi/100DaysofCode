#include <iostream>
#include <vector>

class ForwardContainer {
    std::vector<int> data;

public:
    ForwardContainer(std::initializer_list<int> init) : data(init) {}

    auto begin() { return data.begin(); }
    auto end() { return data.end(); }
};

int main() {
    ForwardContainer container = {10, 20, 30, 40};

    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
