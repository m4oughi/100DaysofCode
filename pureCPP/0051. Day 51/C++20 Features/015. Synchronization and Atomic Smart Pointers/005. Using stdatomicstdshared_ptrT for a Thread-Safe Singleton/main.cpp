#include <iostream>
#include <memory>
#include <atomic>
#include <thread>

class Singleton {
public:
    static std::shared_ptr<Singleton> getInstance() {
        std::shared_ptr<Singleton> instance = instance_.load();
        if (!instance) {
            std::shared_ptr<Singleton> new_instance = std::make_shared<Singleton>();
            if (instance_.compare_exchange_strong(instance, new_instance)) {
                instance = new_instance;
            }
        }
        return instance;
    }

    void doSomething() { std::cout << "Singleton instance is working.\n"; }

private:
    Singleton() = default;
    static std::atomic<std::shared_ptr<Singleton>> instance_;
};

std::atomic<std::shared_ptr<Singleton>> Singleton::instance_;

void worker() {
    std::shared_ptr<Singleton> s = Singleton::getInstance();
    s->doSomething();
}

int main() {
    std::thread t1(worker);
    std::thread t2(worker);
    std::thread t3(worker);

    t1.join();
    t2.join();
    t3.join();
}
