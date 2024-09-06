#include <iostream>
#include <vector>

void process(const int& value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    std::vector<int*> vec = { nullptr, new int(40) };
    
    for (auto ptr : vec) {
        if (ptr) {
            process(*ptr);
        } else {
            std::cout << "Pointer is null in container." << std::endl;
        }
    }

    for (auto ptr : vec) {
        delete ptr;  // Clean up allocated memory
    }

    return 0;
}
