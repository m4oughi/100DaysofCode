#include <iostream>

int& getStaticVar() {
    static int staticVar = 10;
    return staticVar;  // Return by reference
}

int main() {
    int& ref = getStaticVar();
    ref = 20;  // Modify staticVar through reference
    std::cout << "staticVar: " << getStaticVar() << std::endl;  // Output: staticVar: 20
    return 0;
}
