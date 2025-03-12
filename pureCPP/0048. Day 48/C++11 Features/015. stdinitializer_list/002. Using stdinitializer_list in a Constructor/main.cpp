#include <iostream>
#include <vector>
#include <initializer_list>

class Numbers {
public:
    std::vector<int> values;

    Numbers(std::initializer_list<int> nums) : values(nums) {}

    void display() {
        for (int num : values) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    Numbers n = {10, 20, 30, 40, 50};
    n.display();
    return 0;
}
