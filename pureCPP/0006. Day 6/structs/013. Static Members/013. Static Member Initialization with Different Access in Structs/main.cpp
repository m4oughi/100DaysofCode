#include <iostream>

struct AccessExample {
public:
    static int publicStatic;

private:
    static int privateStatic;

public:
    static void modifyPrivate(int newValue) {
        privateStatic = newValue;
    }

    static void displayPrivate() {
        std::cout << "Private Static Value: " << privateStatic << std::endl;
    }
};

int AccessExample::publicStatic = 10;
int AccessExample::privateStatic = 20;

int main() {
    std::cout << "Public Static: " << AccessExample::publicStatic << std::endl;
    
    AccessExample::displayPrivate();
    AccessExample::modifyPrivate(50);
    AccessExample::displayPrivate();
}
