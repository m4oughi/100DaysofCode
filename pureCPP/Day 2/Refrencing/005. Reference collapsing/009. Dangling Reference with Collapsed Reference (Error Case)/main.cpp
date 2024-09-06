#include <iostream>

template<typename T>
T&& create() {
    T temp = 200;
    return std::move(temp);  // Dangling reference: temp is destroyed
}

int main() {
    // int &ref = create<int>();  // Undefined behavior

    return 0;
}