#include <iostream>
#include <memory>
#include <thread>

class Resource {
public:
    Resource() { std::cout << "Resource acquired!" << std::endl; }
    ~Resource() { std::cout << "Resource destroyed!" << std::endl; }
};

void threadFunction(std::shared_ptr<Resource> resource) {
    std::cout << "Thread working with resource!" << std::endl;
}

int main() {
    std::shared_ptr<Resource> resourcePtr = std::make_shared<Resource>();

    std::thread t1(threadFunction, resourcePtr);
    std::thread t2(threadFunction, resourcePtr);

    t1.join();
    t2.join();

    // Resource will be destroyed once all threads finish and shared_ptr goes out of scope
    return 0;
}
