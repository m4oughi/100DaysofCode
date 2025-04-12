#include <iostream>

enum class FileType {
    Text,
    Binary
};

template <FileType T>
class FileHandler;

template <>
class FileHandler<FileType::Text> {
public:
    void open() {
        std::cout << "Opening a text file\n";
    }
};

template <>
class FileHandler<FileType::Binary> {
public:
    void open() {
        std::cout << "Opening a binary file\n";
    }
};

int main() {
    FileHandler<FileType::Text> textFile;
    textFile.open();  // Output: Opening a text file

    FileHandler<FileType::Binary> binaryFile;
    binaryFile.open();  // Output: Opening a binary file

    return 0;
}
