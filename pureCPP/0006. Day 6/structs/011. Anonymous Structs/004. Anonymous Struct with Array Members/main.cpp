#include <iostream>

struct ArrayContainer {
    struct {
        int values[5];
    };
};

int main() {
    ArrayContainer ac;
    for (int i = 0; i < 5; ++i) {
        ac.values[i] = i * 10;
    }
    
    for (int i = 0; i < 5; ++i) {
        std::cout << ac.values[i] << " ";
    }
    std::cout << std::endl;
}
