#include <iostream>
#include <vector>
#include <utility>

class LargeData {
public:
    std::vector<int> data;
    
    LargeData() {
        for (int i = 0; i < 1000000; ++i) {
            data.push_back(i);
        }
        std::cout << "Large Data Created\n";
    }

    LargeData(LargeData&& other) noexcept : data(std::move(other.data)) {
        std::cout << "Move Constructor for Large Data\n";
    }
};

int main() {
    LargeData obj1;
    LargeData obj2 = std::move(obj1); // Moves large data efficiently

    return 0;
}
