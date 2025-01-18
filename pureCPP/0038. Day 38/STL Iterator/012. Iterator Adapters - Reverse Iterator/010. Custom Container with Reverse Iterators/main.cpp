#include <iostream>
#include <vector>

class CustomContainer {
    std::vector<int> data;

public:
    void add(int value) { data.push_back(value); }

    auto rbegin() { return data.rbegin(); }
    auto rend() { return data.rend(); }
};

int main() {
    CustomContainer container;
    container.add(10);
    container.add(20);
    container.add(30);

    std::cout << "Reversed custom container: ";
    for (auto it = container.rbegin(); it != container.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
