#include <iostream>
#include <memory>
#include <utility>

class Singleton {
public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static std::unique_ptr<Singleton> getInstance() {
        return std::move(instance);
    }

private:
    Singleton() { std::cout << "Singleton created\n"; }
    static std::unique_ptr<Singleton> instance;
};

std::unique_ptr<Singleton> Singleton::instance = std::make_unique<Singleton>();

int main() {
    auto obj = Singleton::getInstance();
    // Singleton object cannot be created again.
    return 0;
}
