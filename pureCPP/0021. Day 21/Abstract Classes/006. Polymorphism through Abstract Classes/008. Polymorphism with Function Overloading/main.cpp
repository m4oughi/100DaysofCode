#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void playSound() = 0;  // Pure virtual function
    virtual void playSound(int volume) = 0;  // Overloaded pure virtual function
};

class Guitar : public Instrument {
public:
    void playSound() override {
        cout << "Playing guitar sound." << endl;
    }

    void playSound(int volume) override {
        cout << "Playing guitar sound at volume " << volume << "." << endl;
    }
};

void testInstrument(Instrument* inst) {
    inst->playSound();  // Polymorphic behavior
    inst->playSound(5);  // Polymorphic behavior with overloaded function
}

int main() {
    Guitar guitar;
    testInstrument(&guitar);  // Outputs "Playing guitar sound." and "Playing guitar sound at volume 5."
    return 0;
}
