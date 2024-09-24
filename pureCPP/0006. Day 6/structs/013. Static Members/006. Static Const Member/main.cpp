#include <iostream>

struct StaticConst {
    static const int max_value = 100;
    
    void printMaxValue() const {
        std::cout << "Max Value: " << max_value << std::endl;
    }
};

int main() {
    StaticConst obj;
    obj.printMaxValue();
}
