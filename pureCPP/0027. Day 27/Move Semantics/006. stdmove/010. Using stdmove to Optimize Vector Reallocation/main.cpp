#include <iostream>
#include <vector>
#include <utility>

class MyClass {
public:
    std::vector<int> data;

    MyClass(std::vector<int>&& vec) : data(std::move(vec)) {
        std::cout << "Move constructor for vector called" << std::endl;
    }
};

int main() {
    std::vector<int> largeVec(1000, 1);
    MyClass obj(std::move(largeVec));  // Moves large vector instead of copying

    std::cout << "largeVec size after move: " << largeVec.size() << std::endl;  // largeVec is now empty
}
