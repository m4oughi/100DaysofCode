#include <iostream>

class Outer {
public:
    class Inner {
    private:
        int value;
    public:
        Inner(int v) : value(v) {}
        
        // Inline function in a nested class
        inline void show() const {
            std::cout << "Value: " << value << std::endl;
        }
    };
};

int main() {
    Outer::Inner inner(42);
    inner.show(); // Output: Value: 42
    return 0;
}
