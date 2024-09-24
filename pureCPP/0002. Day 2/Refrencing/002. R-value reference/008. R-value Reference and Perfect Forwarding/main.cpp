#include <iostream>

template<typename T>
void forward(T &&arg) {
    process(std::forward<T>(arg));  // Forwarding preserves L/R value nature
}

int main() {
    int x = 10;
    forward(x);       // Calls L-value version of process
    forward(10);      // Calls R-value version of process

    return 0;
}