#include <iostream>

class MyClass {
public:
    int data;
    
    int& getData() {
        return data;  // Return reference to member variable
    }
};

int main() {
    MyClass obj;
    obj.data = 40;
    int &ref = obj.getData();  // ref refers to obj.data
    ref = 50;  // Modify obj.data
    std::cout << obj.data << std::endl;  // Output: 50

    return 0;
}