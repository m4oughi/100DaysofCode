#include <iostream>

namespace UI {
    class Button {
    public:
        void click() {
            std::cout << "UI Button clicked" << std::endl;
        }
    };
}

namespace OS {
    class Button {
    public:
        void press() {
            std::cout << "OS Button pressed" << std::endl;
        }
    };
}

int main() {
    UI::Button uiButton;
    OS::Button osButton;

    uiButton.click();  // Calls UI Button
    osButton.press();  // Calls OS Button
    return 0;
}
