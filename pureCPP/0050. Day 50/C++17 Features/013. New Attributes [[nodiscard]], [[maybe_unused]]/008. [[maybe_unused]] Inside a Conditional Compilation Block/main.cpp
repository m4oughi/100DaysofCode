#include <iostream>

int main() {
#ifdef DEBUG
    [[maybe_unused]] int debugValue = 42;
#endif
    return 0;
}
