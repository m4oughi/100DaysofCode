#include <iostream>

class Container {
public:
    int value;

    int& getValue() {
        return value;  // Return reference to member variable
    }
};

int main() {
    Container obj;
    obj.value = 60;
    int &ref = obj.getValue();  // ref refers to obj.value
    ref = 70;  // Modify obj.value
    std::cout << obj.value << std::endl;  // Output: 70

    return 0;
}