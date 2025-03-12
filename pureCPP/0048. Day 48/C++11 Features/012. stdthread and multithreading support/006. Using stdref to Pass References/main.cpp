#include <iostream>
#include <thread>

void increment(int& num) {
    num += 10;
}

int main() {
    int value = 5;
    std::thread t(increment, std::ref(value)); // Pass reference explicitly
    t.join();

    std::cout << "Updated value: " << value << "\n";

    return 0;
}
