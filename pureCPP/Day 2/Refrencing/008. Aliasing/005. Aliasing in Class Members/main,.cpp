#include <iostream>

class MyClass {
public:
    int value;
};

int main() {
    MyClass obj;
    obj.value = 100;

    int &alias1 = obj.value;  // alias1 refers to obj.value
    int &alias2 = obj.value;  // alias2 also refers to obj.value

    alias1 = 200;  // Modify obj.value through alias1
    std::cout << alias2 << std::endl;  // Output: 200 (alias2 reflects the change)

    return 0;
}