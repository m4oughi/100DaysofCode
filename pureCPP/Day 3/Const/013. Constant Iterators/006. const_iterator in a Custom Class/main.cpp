#include <vector>
#include <iostream>

class MyContainer {
    std::vector<int> data;

public:
    MyContainer(std::initializer_list<int> list) : data(list) {}

    std::vector<int>::const_iterator begin() const { return data.cbegin(); }
    std::vector<int>::const_iterator end() const { return data.cend(); }
};

int main() {
    MyContainer container = {1, 2, 3, 4, 5};
    
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " "; // Prints 1 2 3 4 5
    }
}
