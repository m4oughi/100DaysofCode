#include <iostream>
#include <vector>

class Container {
public:
    std::vector<int> data;

    Container(std::initializer_list<int> initList) : data(initList) {}

    Container(Container&& other) noexcept : data(std::move(other.data)) {
        std::cout << "Move constructor called!\n";
    }

    void print() {
        for (int num : data) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    Container c1 = {1, 2, 3, 4, 5};
    Container c2 = std::move(c1);

    std::cout << "Contents of moved container:\n";
    c2.print();

    return 0;
}
