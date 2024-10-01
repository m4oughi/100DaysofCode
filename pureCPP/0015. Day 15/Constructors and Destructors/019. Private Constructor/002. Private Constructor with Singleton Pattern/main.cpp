#include <iostream>

class Singleton {
private:
    static Singleton* instance;
    Singleton() {  // Private constructor
        std::cout << "Singleton instance created" << std::endl;
    }

public:
    static Singleton* getInstance() {  // Public static method to control object creation
        if (!instance) {
            instance = new Singleton();  // Accessing private constructor
        }
        return instance;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* obj1 = Singleton::getInstance();  // First instance creation
    Singleton* obj2 = Singleton::getInstance();  // Same instance is returned
    return 0;
}
