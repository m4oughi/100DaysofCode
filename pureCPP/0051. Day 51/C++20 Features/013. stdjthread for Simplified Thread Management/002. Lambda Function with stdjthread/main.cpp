#include <iostream>
#include <thread>

int main() {
    std::jthread t([] { std::cout << "Lambda executed in jthread\n"; });
    return 0;
}
