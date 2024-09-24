#include <iostream>

inline void func1() { std::cout << "Func1" << std::endl; }
inline void func2() { std::cout << "Func2" << std::endl; }
inline void func3() { std::cout << "Func3" << std::endl; }
inline void func4() { std::cout << "Func4" << std::endl; }

int main() {
    func1();
    func2();
    func3();
    func4();
    return 0;
}
