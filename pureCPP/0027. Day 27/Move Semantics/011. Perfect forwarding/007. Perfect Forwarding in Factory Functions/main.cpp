#include <iostream>
#include <memory>
#include <string>

class Widget {
public:
    Widget(const std::string& name) { std::cout << "Lvalue constructor: " << name << std::endl; }
    Widget(std::string&& name) { std::cout << "Rvalue constructor: " << name << std::endl; }

    template <typename T>
    static std::unique_ptr<Widget> createWidget(T&& name) {
        return std::make_unique<Widget>(std::forward<T>(name));  // Perfect forwarding in factory function
    }
};

int main() {
    std::string w1 = "Widget1";
    auto widget1 = Widget::createWidget(w1);      // Calls lvalue constructor
    auto widget2 = Widget::createWidget("Widget2");  // Calls rvalue constructor
}
