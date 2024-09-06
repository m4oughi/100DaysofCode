#include <iostream>

int main() {
    int a = 30;
    int &refA = a;  // Mutable reference to a
    int &refB = refA;  // refB also refers to a

    refB = 40;  // Modifies a through refB
    std::cout << a << std::endl;  // Output: 40

    return 0;
}