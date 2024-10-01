#include <iostream>
#include <memory>

class Widget {
public:
    Widget() {
        std::cout << "Widget created." << std::endl;
    }
    
    ~Widget() {
        std::cout << "Widget destroyed." << std::endl;
    }
};

int main() {
    {
        std::unique_ptr<Widget> ptr = std::make_unique<Widget>();
        // Destructor is called automatically when ptr goes out of scope
    }  // Widget destructor is automatically called here

    std::cout << "Unique pointer out of scope." << std::endl;
    return 0;
}
