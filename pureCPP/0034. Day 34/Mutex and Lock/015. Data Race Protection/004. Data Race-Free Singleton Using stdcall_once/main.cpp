#include <iostream>
#include <mutex>

class Singleton {
private:
    static Singleton* instance;
    static std::once_flag flag;
    Singleton() {} // Private constructor

public:
    static Singleton* getInstance() {
        std::call_once(flag, []() { instance = new Singleton(); });
        return instance;
    }

    void show() {
        std::cout << "Singleton instance accessed\n";
    }
};

Singleton* Singleton::instance = nullptr;
std::once_flag Singleton::flag;

int main() {
    std::thread t1([] { Singleton::getInstance()->show(); });
    std::thread t2([] { Singleton::getInstance()->show(); });

    t1.join();
    t2.join();
    return 0;
}
