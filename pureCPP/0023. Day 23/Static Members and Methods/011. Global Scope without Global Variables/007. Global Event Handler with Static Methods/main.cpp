#include <iostream>
using namespace std;

class EventHandler {
public:
    static void handleClickEvent() {
        cout << "Button clicked!" << endl;
    }

    static void handleResizeEvent() {
        cout << "Window resized!" << endl;
    }
};

int main() {
    // Access static methods globally without global variables
    EventHandler::handleClickEvent();   // Output: Button clicked!
    EventHandler::handleResizeEvent();  // Output: Window resized!
    return 0;
}
