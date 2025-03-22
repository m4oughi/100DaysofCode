#include <iostream>

namespace A::B::C {
    void show() {
        std::cout << "Inside A::B::C namespace\n";
    }
}

int main() {
    A::B::C::show();
    return 0;
}
