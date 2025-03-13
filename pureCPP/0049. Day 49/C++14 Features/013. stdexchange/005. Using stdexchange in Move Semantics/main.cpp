#include <iostream>
#include <utility>

class Data {
    std::string value;
public:
    Data(std::string val) : value(std::move(val)) {}
    
    std::string takeValue() {
        return std::exchange(value, ""); // Move out the value and reset
    }

    void print() {
        std::cout << "Current Value: \"" << value << "\"\n";
    }
};

int main() {
    Data obj("Hello, World!");
    
    std::string extracted = obj.takeValue();
    
    std::cout << "Extracted: \"" << extracted << "\"\n";
    obj.print();

    return 0;
}
