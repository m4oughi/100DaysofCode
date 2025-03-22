#include <iostream>
#include <memory>

int main() {
    auto arrPtr = std::make_shared<std::array<int, 5>>({10, 20, 30, 40, 50});
    std::shared_ptr<int> aliasPtr(arrPtr, &(*arrPtr)[2]); // Alias to `arrPtr[2]`

    std::cout << "Aliased Element: " << *aliasPtr << "\n";
    std::cout << "Use count: " << aliasPtr.use_count() << "\n";

    return 0;
}
