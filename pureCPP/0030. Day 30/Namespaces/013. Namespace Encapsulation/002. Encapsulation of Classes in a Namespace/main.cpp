#include <iostream>

namespace UI {
    class Button {
    public:
        void click() {
            std::cout << "Button clicked!" << std::endl;
        }
    };
}

namespace System {
    class Button {
    public:
        void press() {
            std::cout << "System Button pressed!" << std::endl;
        }
    };
}

int main() {
    UI::Button uiButton;
    System::Button systemButton;

    uiButton.click();       // Calls UI Button
    systemButton.press();   // Calls System Button
    return 0;
}
