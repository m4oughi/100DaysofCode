#include <iostream>
using namespace std;

class LivingBeing {
public:
    void breathe() {
        cout << "Living being is breathing." << endl;
    }
};

class Animal : virtual public LivingBeing {
};

class Machine : virtual public LivingBeing {
};

class Cyborg : public Animal, public Machine {
};

int main() {
    Cyborg myCyborg;
    myCyborg.breathe(); // No ambiguity due to virtual inheritance
    return 0;
}
