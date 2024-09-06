#include <iostream>

template<typename T>
T& getReference(T &param) {
    return param;  // Return reference to the passed parameter
}

int main() {
    int a = 80;
    double b = 90.5;
    
    int &refA = getReference(a);  // refA refers to a
    double &refB = getReference(b);  // refB refers to b
    
    refA = 100;  // Modify a
    refB = 110.5;  // Modify b
    
    std::cout << a << " " << b << std::endl;  // Output: 100 110.5

    return 0;
}