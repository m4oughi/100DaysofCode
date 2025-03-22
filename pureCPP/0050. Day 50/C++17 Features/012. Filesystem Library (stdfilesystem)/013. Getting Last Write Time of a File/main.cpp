#include <iostream>
#include <filesystem>
#include <chrono>

int main() {
    std::filesystem::path filePath = "example.txt";

    auto ftime = std::filesystem::last_write_time(filePath);
    auto time = decltype(ftime)::clock::to_time_t(ftime);

    std::cout << "Last modified time: " << std::ctime(&time);

    return 0;
}
