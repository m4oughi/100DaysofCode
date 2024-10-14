#include <iostream>
#include <memory>

class Manager;

class Worker {
public:
    std::weak_ptr<Manager> managerPtr;  // Weak reference to avoid circular dependency
    Worker() { std::cout << "Worker created" << std::endl; }
    ~Worker() { std::cout << "Worker destroyed" << std::endl; }
};

class Manager {
public:
    std::shared_ptr<Worker> workerPtr;
    Manager() { std::cout << "Manager created" << std::endl; }
    ~Manager() { std::cout << "Manager destroyed" << std::endl; }
};

int main() {
    std::shared_ptr<Manager> manager = std::make_shared<Manager>();
    std::shared_ptr<Worker> worker = std::make_shared<Worker>();

    manager->workerPtr = worker;
    worker->managerPtr = manager;  // Weak pointer prevents circular reference

    // Memory is automatically managed and no leaks occur
    return 0;
}
