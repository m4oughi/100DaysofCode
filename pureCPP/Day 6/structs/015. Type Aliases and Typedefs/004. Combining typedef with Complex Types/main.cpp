#include <iostream>
#include <vector>

struct ComplexTypedef {
    typedef std::vector<int> IntVector;  // Typedef for a vector of ints
    IntVector numbers;
};

int main() {
    ComplexTypedef obj;
    obj.numbers = {1, 2, 3, 4, 5};
    
    for (auto num : obj.numbers) {
        std::cout << num << " ";
    }
}
