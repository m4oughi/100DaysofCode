#include <iostream>
#include <vector>
#include <iomanip>  // For std::setw

struct AlignedStruct {
    int a;
    double b;
    char c;
};

int main() {
    std::vector<AlignedStruct> vec(3);

    // Display memory addresses of each element
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << "Element " << i << ": " << &vec[i] << std::endl;
    }

    // Access and modify elements directly
    vec[0].a = 10;
    vec[0].b = 20.5;
    vec[0].c = 'Z';

    // Display modified elements
    for (const auto& item : vec) {
        std::cout << item.a << ", " << std::fixed << std::setprecision(1) << item.b << ", " << item.c << std::endl;
    }

    return 0;
}
