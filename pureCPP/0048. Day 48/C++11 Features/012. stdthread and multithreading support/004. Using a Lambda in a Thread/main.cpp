#include <iostream>
#include <thread>

int main() {
    std::thread t([] {
        std::cout << "Lambda function running in a thread.\n";
    });

    t.join();
    return 0;
}
