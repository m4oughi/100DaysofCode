#include <iostream>
using namespace std;

class IEventListener {
public:
    virtual void onEvent(const string& event) = 0;
};

class ButtonListener : public IEventListener {
public:
    void onEvent(const string& event) override {
        if (event == "click") {
            cout << "Button clicked!" << endl;
        }
    }
};

class KeyboardListener : public IEventListener {
public:
    void onEvent(const string& event) override {
        if (event == "keyPress") {
            cout << "Key pressed!" << endl;
        }
    }
};

void triggerEvent(IEventListener* listener, const string& event) {
    listener->onEvent(event);  // Calls specific event handler
}

int main() {
    ButtonListener button;
    KeyboardListener keyboard;

    triggerEvent(&button, "click");       // Outputs "Button clicked!"
    triggerEvent(&keyboard, "keyPress");  // Outputs "Key pressed!"
    
    return 0;
}
