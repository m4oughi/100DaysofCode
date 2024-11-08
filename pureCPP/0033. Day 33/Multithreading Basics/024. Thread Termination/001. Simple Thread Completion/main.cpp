#include <iostream>
#include <thread>

void simpleTask() {
    std::cout << "Thread is starting." << std::endl;
    std::cout << "Thread is completing naturally." << std::endl;
}

int main() {
    std::thread t(simpleTask);
    t.join();
    std::cout << "Thread has completed." << std::endl;

    return 0;
}
