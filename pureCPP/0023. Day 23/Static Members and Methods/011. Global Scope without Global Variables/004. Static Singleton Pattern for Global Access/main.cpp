#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;  // Static pointer to hold the singleton instance

    Singleton() {}  // Private constructor to prevent direct instantiation

public:
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void showMessage() {
        cout << "Singleton instance is being used!" << endl;
    }
};

// Initialize static member
Singleton* Singleton::instance = nullptr;

int main() {
    // Accessing singleton instance globally without a global object
    Singleton* s = Singleton::getInstance();
    s->showMessage();  // Output: Singleton instance is being used!

    return 0;
}
