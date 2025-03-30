#include <iostream>
#include <stack>

int main() {
    std::stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);

    // ❌ This won't compile because `std::stack` has no `begin()` or `end()`
    // for (int value : stk) {
    //     std::cout << value << " ";
    // }

    return 0;
}
