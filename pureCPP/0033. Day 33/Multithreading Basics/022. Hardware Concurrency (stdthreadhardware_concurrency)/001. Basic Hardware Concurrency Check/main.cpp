#include <iostream>
#include <thread>

int main() {
    unsigned int threads = std::thread::hardware_concurrency();
    std::cout << "Hardware supports " << threads << " concurrent threads." << std::endl;
    return 0;
}
