#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream file("utf8_test.txt", std::ios::binary);
    std::u8string utf8_text = u8"Привет, мир!"; // Russian for "Hello, World!"

    file.write(reinterpret_cast<const char*>(utf8_text.c_str()), utf8_text.size());
    file.close();

    std::ifstream in_file("utf8_test.txt", std::ios::binary);
    std::string read_text((std::istreambuf_iterator<char>(in_file)), std::istreambuf_iterator<char>());

    std::cout << "Read from file: " << read_text << "\n";
    return 0;
}
