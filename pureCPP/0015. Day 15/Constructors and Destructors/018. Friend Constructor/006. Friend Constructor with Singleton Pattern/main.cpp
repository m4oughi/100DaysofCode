#include <iostream>

class Singleton {
private:
    static Singleton* instance;
    Singleton() {  // Private constructor
        std::cout << "Singleton instance created" << std::endl;
    }

public:
    static Singleton* getInstance() {  // Friend-like access to private constructor
        if (!instance) {
            instance = new Singleton();  // Accessing private constructor
        }
        return instance;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* obj1 = Singleton::getInstance();  // Singleton instance created
    Singleton* obj2 = Singleton::getInstance();  // Same instance returned
    return 0;
}
