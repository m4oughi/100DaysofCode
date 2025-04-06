#include <iostream>

class StringWrapper {
public:
    constexpr StringWrapper(const char* s) : str(s) {}

    constexpr char getChar(int index) const { return str[index]; }

private:
    const char* str;
};

int main() {
    constexpr StringWrapper sw("CompileTime");
    constexpr char ch = sw.getChar(3);  // ✅ Compile-time access

    std::cout << "Character at index 3: " << ch << '\n';
}
