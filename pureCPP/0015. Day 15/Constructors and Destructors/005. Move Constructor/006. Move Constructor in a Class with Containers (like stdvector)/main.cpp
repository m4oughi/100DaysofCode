#include <iostream>
#include <vector>

class Container {
private:
    std::vector<int> data;
public:
    // Parameterized constructor
    Container(int size) : data(size) {
        std::cout << "Container of size " << size << " created." << std::endl;
    }

    // Move constructor
    Container(Container&& other) noexcept : data(std::move(other.data)) {
        std::cout << "Container moved." << std::endl;
    }

    // Destructor
    ~Container() {
        std::cout << "Container memory deallocated." << std::endl;
    }
};

int main() {
    Container c1(10);
    Container c2 = std::move(c1);  // Move constructor is called
    return 0;
}
