#include <iostream>
#include <thread>

int main() {
    std::thread t1([]() {
        std::cout << "Lambda function running in thread!" << std::endl;
    });

    t1.join();
    return 0;
}
