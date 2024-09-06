#include <iostream>

int main() {
    int b = 50;
    const int &constAlias1 = b;  // constAlias1 is a const alias for b
    const int &constAlias2 = b;  // constAlias2 is another const alias for b

    // constAlias1 = 60;  // Error: Cannot modify through constAlias1
    b = 70;  // Modify b directly
    std::cout << constAlias2 << std::endl;  // Output: 70 (constAlias2 reflects the change)

    return 0;
}