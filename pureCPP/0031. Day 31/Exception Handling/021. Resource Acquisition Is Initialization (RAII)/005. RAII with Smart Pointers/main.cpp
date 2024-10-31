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

void createWidget() {
    std::unique_ptr<Widget> widgetPtr = std::make_unique<Widget>();  // Smart pointer manages the resource
    std::cout << "Widget is being used." << std::endl;
    // No need to explicitly delete the widget, unique_ptr will handle it
}

int main() {
    createWidget();  // Widget will be automatically destroyed when the function ends
    return 0;
}
