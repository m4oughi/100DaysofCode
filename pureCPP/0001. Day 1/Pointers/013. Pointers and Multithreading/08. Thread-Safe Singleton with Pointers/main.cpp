#include <iostream>
#include <thread>
#include <mutex>
#include <memory>

class Singleton {
private:
    static std::shared_ptr<Singleton> instance;
    static std::mutex mtx;

    Singleton() {
        std::cout << "Singleton instance created" << std::endl;
    }

public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static std::shared_ptr<Singleton> getInstance() {
        std::lock_guard<std::mutex> lock(mtx);
        if (!instance) {
            instance = std::shared_ptr<Singleton>(new Singleton());
        }
        return instance;
    }

    void doSomething() {
        std::cout << "Singleton instance doing something" << std::endl;
    }
};

std::shared_ptr<Singleton> Singleton::instance = nullptr;
std::mutex Singleton::mtx;

void threadFunction() {
    auto singleton = Singleton::getInstance();
    singleton->doSomething();
}

int main() {
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);

    t1.join();
    t2.join();

    return 0;
}
