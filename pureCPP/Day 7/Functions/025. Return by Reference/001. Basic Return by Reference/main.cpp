#include <iostream>

int globalVar = 10;

int& getGlobalVar() {
    return globalVar;  // Return by reference
}

int main() {
    int& ref = getGlobalVar();
    ref = 20;  // Modify globalVar through reference
    std::cout << "globalVar: " << globalVar << std::endl;  // Output: globalVar: 20
    return 0;
}
