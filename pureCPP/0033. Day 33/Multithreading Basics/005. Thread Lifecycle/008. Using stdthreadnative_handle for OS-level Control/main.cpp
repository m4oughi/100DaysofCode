#include <iostream>
#include <thread>

void task() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task finished!" << std::endl;
}

int main() {
    std::thread t1(task);

    auto nativeHandle = t1.native_handle(); // Get the native thread handle
    std::cout << "Native thread handle: " << nativeHandle << std::endl;

    t1.join(); // Wait for the thread to complete
    return 0;
}
