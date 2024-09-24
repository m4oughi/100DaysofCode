#include <iostream>
#include <array>
#include <fstream>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::ofstream file("memory.bin", std::ios::binary);
    file.write(reinterpret_cast<char*>(arr.data()), arr.size() * sizeof(int));
    file.close();

    std::cout << "Written array to memory-mapped file 'memory.bin'." << std::endl;


    return 0;
}