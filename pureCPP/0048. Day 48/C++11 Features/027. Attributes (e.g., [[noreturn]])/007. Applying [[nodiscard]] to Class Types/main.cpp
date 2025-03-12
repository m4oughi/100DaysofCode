#include <iostream>

struct [[nodiscard]] ImportantResult {
    int value;
};

ImportantResult calculateSomething() {
    return {42};
}

int main() {
    calculateSomething(); // Warning: Return value is discarded
    return 0;
}
