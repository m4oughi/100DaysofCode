#include <iostream>

// Generic template
template <typename T1, typename T2>
struct PartialTemplate {
    void print() const {
        std::cout << "General template\n";
    }
};

// Partial specialization for T2 = int
template <typename T1>
struct PartialTemplate<T1, int> {
    void print() const {
        std::cout << "Partial specialization for T2 = int\n";
    }
};

int main() {
    PartialTemplate<double, double> generalStruct;
    generalStruct.print();
    
    PartialTemplate<float, int> partialStruct;
    partialStruct.print();
}
