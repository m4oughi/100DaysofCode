#include <iostream>
#include <concepts>

// Concept that checks if a class has a `run()` method
template <typename T>
concept HasRunMethod = requires(T t) {
    { t.run() };
};

class Engine {
public:
    void run() { std::cout << "Engine running\n"; }
};

class Light {
public:
    void toggle() { std::cout << "Light toggled\n"; }
};

// Function using the concept
template <HasRunMethod T>
void execute(T obj) {
    obj.run();
}

int main() {
    Engine e;
    execute(e);  // ✅ Works
    
    // Light l;
    // execute(l); // ❌ Compilation Error: Light has no `run()` method
}
