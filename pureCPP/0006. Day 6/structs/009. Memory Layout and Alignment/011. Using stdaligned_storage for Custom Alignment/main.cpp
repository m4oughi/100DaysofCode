#include <iostream>
#include <type_traits>

struct MyStruct {
    char a;
    int b;
};

int main() {
    std::aligned_storage<sizeof(MyStruct), alignof(double)>::type storage;

    MyStruct* s = new(&storage) MyStruct{'a', 42};

    std::cout << "Size of storage: " << sizeof(storage) << " bytes" << std::endl;
    std::cout << "a: " << s->a << ", b: " << s->b << std::endl;
}
