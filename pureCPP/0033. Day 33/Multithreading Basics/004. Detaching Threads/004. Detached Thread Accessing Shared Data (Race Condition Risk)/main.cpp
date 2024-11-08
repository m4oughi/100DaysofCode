#include <iostream>
#include <thread>

void taskWithSharedData(int& counter) {
    for (int i = 0; i < 5; ++i) {
        ++counter;
        std::cout << "Counter: " << counter << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    int counter = 0;

    std::thread t1(taskWithSharedData, std::ref(counter));
    t1.detach(); // Detach the thread

    std::this_thread::sleep_for(std::chrono::seconds(3)); // Give thread time to complete
    std::cout << "Final counter: " << counter << std::endl;
    return 0;
}
