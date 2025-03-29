#include <iostream>
#include <thread>
#include <mutex>

std::mutex utf8_mutex;

void print_utf8(const std::u8string& text) {
    std::lock_guard<std::mutex> lock(utf8_mutex);
    std::cout << reinterpret_cast<const char*>(text.c_str()) << "\n";
}

int main() {
    std::u8string message1 = u8"🌍 Earth";
    std::u8string message2 = u8"🚀 Space";

    std::thread t1(print_utf8, std::cref(message1));
    std::thread t2(print_utf8, std::cref(message2));

    t1.join();
    t2.join();

    return 0;
}
