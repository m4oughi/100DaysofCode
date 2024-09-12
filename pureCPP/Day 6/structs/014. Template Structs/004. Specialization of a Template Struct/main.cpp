#include <iostream>

template <typename T>
struct SpecializedTemplate {
    T value;
    
    void print() const {
        std::cout << "General Value: " << value << std::endl;
    }
};

// Specialization for int
template <>
struct SpecializedTemplate<int> {
    int value;
    
    void print() const {
        std::cout << "Integer Value: " << value << std::endl;
    }
};

int main() {
    SpecializedTemplate<double> generalStruct;
    generalStruct.value = 5.5;
    generalStruct.print();
    
    SpecializedTemplate<int> intStruct;
    intStruct.value = 10;
    intStruct.print();
}
