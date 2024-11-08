#include <iostream>
#include <thread>
#include <memory>

void taskWithResource(std::shared_ptr<int> resource) {
    std::cout << "Thread working with resource: " << *resource << std::endl;
    *resource += 10;
}

int main() {
    auto resource = std::make_shared<int>(5);

    std::thread t1(taskWithResource, resource);
    t1.detach(); // Detach the thread

    std::this_thread::sleep_for(std::chrono::seconds(1)); // Give detached thread time to complete
    std::cout << "Main thread sees resource: " << *resource << std::endl;
    return 0;
}
