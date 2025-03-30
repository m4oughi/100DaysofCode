#include <iostream>

class CustomContainer {
private:
    int data[3] = {10, 20, 30};

    int* begin() { return data; } // ❌ Private!
    int* end() { return data + 3; } // ❌ Private!
};

int main() {
    CustomContainer cc;

    // ❌ Compilation Error: Cannot access private `begin()` and `end()`
    // for (int value : cc) {
    //     std::cout << value << " ";
    // }

    return 0;
}
