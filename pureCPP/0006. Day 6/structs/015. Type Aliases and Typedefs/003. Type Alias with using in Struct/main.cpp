#include <iostream>

struct UsingAlias {
    using Integer = int;  // Type alias with `using`
    Integer num;
};

int main() {
    UsingAlias obj;
    obj.num = 20;
    std::cout << "Number: " << obj.num << std::endl;
}
