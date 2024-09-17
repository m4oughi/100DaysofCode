#include <iostream>

class Singleton {
private:
    static Singleton* instance;  // Static instance pointer
    int data;

    // Private constructor
    Singleton() : data(0) {}

public:
    // Static function to provide global access to the instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void setData(int d) {
        data = d;
    }

    void displayData() {
        std::cout << "Data: " << data << std::endl;
    }
};

// Initialize static member
Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->setData(100);

    Singleton* s2 = Singleton::getInstance();
    s2->displayData();  // Output: Data: 100 (s1 and s2 are the same instance)

    return 0;
}
