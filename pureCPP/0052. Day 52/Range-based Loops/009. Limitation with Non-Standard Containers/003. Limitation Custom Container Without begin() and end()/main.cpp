#include <iostream>

class CustomContainer {
private:
    int data[3] = {10, 20, 30}; // Internal array
};

int main() {
    CustomContainer cc;
    
    // ❌ This won't compile because `CustomContainer` lacks `begin()` and `end()`
    // for (int value : cc) {
    //     std::cout << value << " ";
    // }

    return 0;
}
