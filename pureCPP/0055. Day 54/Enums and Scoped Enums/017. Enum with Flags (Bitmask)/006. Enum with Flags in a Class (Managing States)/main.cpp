#include <iostream>

enum class ObjectState : int {
    None = 0,
    Initialized = 1 << 0,   // 0001
    Loaded = 1 << 1,        // 0010
    Ready = 1 << 2,         // 0100
    Completed = 1 << 3,     // 1000
    All = Initialized | Loaded | Ready | Completed
};

class Object {
public:
    ObjectState state = ObjectState::None;

    void setState(ObjectState newState) {
        state = static_cast<ObjectState>(static_cast<int>(state) | static_cast<int>(newState));
    }

    void unsetState(ObjectState newState) {
        state = static_cast<ObjectState>(static_cast<int>(state) & ~static_cast<int>(newState));
    }

    void printState() {
        std::cout << "Object state: ";
        if (static_cast<int>(state) & static_cast<int>(ObjectState::Initialized)) std::cout << "Initialized ";
        if (static_cast<int>(state) & static_cast<int>(ObjectState::Loaded)) std::cout << "Loaded ";
        if (static_cast<int>(state) & static_cast<int>(ObjectState::Ready)) std::cout << "Ready ";
        if (static_cast<int>(state) & static_cast<int>(ObjectState::Completed)) std::cout << "Completed ";
        std::cout << "\n";
    }
};

int main() {
    Object obj;
    obj.setState(ObjectState::Initialized);
    obj.setState(ObjectState::Loaded);
    obj.printState();

    obj.unsetState(ObjectState::Loaded);
    obj.printState();

    return 0;
}
