#include <iostream>
#include <vector>

class MyContainer {
    std::vector<int> data = {1, 2, 3, 4, 5};

public:
    auto begin() { return data.begin(); }
    auto end() { return data.end(); }
};

int main() {
    MyContainer container;

    for (int num : container) {
        std::cout << num << " ";
    }

    return 0;
}
