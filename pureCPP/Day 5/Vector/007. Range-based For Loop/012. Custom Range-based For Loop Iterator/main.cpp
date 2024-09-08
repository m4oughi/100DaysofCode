#include <iostream>
#include <vector>

class CustomContainer {
    std::vector<int> data;
public:
    CustomContainer(std::initializer_list<int> list) : data(list) {}

    std::vector<int>::iterator begin() { return data.begin(); }
    std::vector<int>::iterator end() { return data.end(); }

    std::vector<int>::const_iterator begin() const { return data.begin(); }
    std::vector<int>::const_iterator end() const { return data.end(); }
};

int main() {
    CustomContainer container = {10, 20, 30, 40, 50};

    std::cout << "Elements in the custom container:" << std::endl;
    for (int num : container) {
        std::cout << num << " ";
    }

    return 0;
}
