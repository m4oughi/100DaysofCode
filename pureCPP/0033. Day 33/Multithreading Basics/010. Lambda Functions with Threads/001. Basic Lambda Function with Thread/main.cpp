#include <iostream>
#include <thread>

int main() {
    std::thread t([]() {
        std::cout << "Lambda function in thread" << std::endl;
    });
    t.join();
    return 0;
}
