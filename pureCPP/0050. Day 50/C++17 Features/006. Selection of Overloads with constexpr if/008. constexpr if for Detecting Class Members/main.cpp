#include <iostream>
#include <type_traits>

class WithMethod {
public:
    void show() { std::cout << "WithMethod::show()\n"; }
};

class WithoutMethod {};

template <typename T>
void callShow(T obj) {
    if constexpr (std::is_member_function_pointer_v<decltype(&T::show)>) {
        obj.show();
    } else {
        std::cout << "No show() method available\n";
    }
}

int main() {
    WithMethod w;
    WithoutMethod n;

    callShow(w); // Output: WithMethod::show()
    callShow(n); // Output: No show() method available
    return 0;
}
