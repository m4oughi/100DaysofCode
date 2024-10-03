#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}

    // Invalid attempt to overload the . operator (compilation error)
    // Test& operator.(const Test& other) {
    //    this->value = other.value;
    //    return *this;
    // }
};

int main() {
    Test t1(5);
    // This will generate a compilation error if you try to overload the . operator.
    // Test t2 = t1.operator.(t1); 
    return 0;
}
