#include <iostream>
#include <initializer_list>

class CustomContainer {
public:
    CustomContainer(std::initializer_list<int> values) {
        for (int v : values) {
            std::cout << v << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    CustomContainer c{10, 20, 30, 40, 50}; // Uses std::initializer_list

    return 0;
}
