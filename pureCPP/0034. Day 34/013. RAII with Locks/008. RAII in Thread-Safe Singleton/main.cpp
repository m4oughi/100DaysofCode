#include <iostream>
#include <mutex>

class Singleton {
private:
    static Singleton* instance;
    static std::once_flag flag;
    Singleton() {} // Private constructor

public:
    static Singleton* getInstance() {
        std::call_once(flag, []() { // RAII to ensure single initialization
            instance = new Singleton();
            std::cout << "Singleton instance created\n";
        });
        return instance;
    }

    void show() {
        std::cout << "Singleton instance accessed\n";
    }
};

Singleton* Singleton::instance = nullptr;
std::once_flag Singleton::flag;

int main() {
    Singleton::getInstance()->show();
    Singleton::getInstance()->show();
    return 0;
}
