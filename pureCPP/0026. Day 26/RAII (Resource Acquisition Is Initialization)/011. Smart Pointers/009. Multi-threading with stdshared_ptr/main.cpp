#include <iostream>
#include <memory>
#include <thread>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }
    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }
};

void worker(std::shared_ptr<Resource> res) {
    std::cout << "Worker thread using resource." << std::endl;
}

int main() {
    std::shared_ptr<Resource> sharedRes = std::make_shared<Resource>();

    std::thread t1(worker, sharedRes);
    std::thread t2(worker, sharedRes);
    
    t1.join();
    t2.join();

    std::cout << "End of program." << std::endl;
}  // Resource is released when the last `std::shared_ptr` goes out of scope.
