#include <iostream>
#include <unordered_map>

struct Cache {
    static inline std::unordered_map<int, std::string> data;
};

int main() {
    Cache::data[1] = "Hello";
    Cache::data[2] = "World";

    std::cout << "Cache[1]: " << Cache::data[1] << '\n';
    std::cout << "Cache[2]: " << Cache::data[2] << '\n';
    return 0;
}
