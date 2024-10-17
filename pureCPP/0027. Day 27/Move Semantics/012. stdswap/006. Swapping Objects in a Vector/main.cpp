#include <iostream>
#include <vector>
#include <utility>

class MyClass {
    int data;
public:
    MyClass(int val) : data(val) {}
    int getValue() const { return data; }
};

int main() {
    std::vector<MyClass> vec1 = {MyClass(10), MyClass(20)};
    std::vector<MyClass> vec2 = {MyClass(30), MyClass(40)};
    
    std::cout << "Before swap: vec1[0] = " << vec1[0].getValue() << ", vec2[0] = " << vec2[0].getValue() << std::endl;
    
    std::swap(vec1[0], vec2[0]);  // Swapping elements inside vectors
    
    std::cout << "After swap: vec1[0] = " << vec1[0].getValue() << ", vec2[0] = " << vec2[0].getValue() << std::endl;
}
