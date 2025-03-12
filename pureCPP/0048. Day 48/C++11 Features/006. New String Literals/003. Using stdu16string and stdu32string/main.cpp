#include <iostream>
#include <string>

int main() {
    std::u16string u16_str = u"Hello, Unicode!";
    std::u32string u32_str = U"Hello, Wide Unicode!";

    std::cout << "UTF-16 string size: " << u16_str.size() << std::endl;
    std::cout << "UTF-32 string size: " << u32_str.size() << std::endl;

    return 0;
}
