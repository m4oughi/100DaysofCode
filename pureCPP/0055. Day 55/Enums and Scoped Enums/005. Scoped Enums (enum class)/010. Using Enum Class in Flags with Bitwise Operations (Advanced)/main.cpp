#include <iostream>

enum class FileAccess : unsigned int {
    None  = 0,
    Read  = 1 << 0,
    Write = 1 << 1,
    Exec  = 1 << 2
};

// Enable bitwise operations on scoped enums (custom overloads)
inline FileAccess operator|(FileAccess a, FileAccess b) {
    return static_cast<FileAccess>(
        static_cast<unsigned int>(a) | static_cast<unsigned int>(b));
}

inline bool hasAccess(FileAccess rights, FileAccess test) {
    return (static_cast<unsigned int>(rights) & static_cast<unsigned int>(test)) != 0;
}

int main() {
    FileAccess userAccess = FileAccess::Read | FileAccess::Write;

    std::cout << "Can write? " << std::boolalpha << hasAccess(userAccess, FileAccess::Write) << "\n";
}
