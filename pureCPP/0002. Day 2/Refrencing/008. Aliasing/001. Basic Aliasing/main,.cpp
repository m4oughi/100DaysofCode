#include <iostream>

int main() {
    int x = 10;
    int &alias1 = x;  // alias1 is an alias for x
    int &alias2 = x;  // alias2 is another alias for x

    alias1 = 20;  // Modify x through alias1
    std::cout << alias2 << std::endl;  // Output: 20 (alias2 reflects the change)

    return 0;
}