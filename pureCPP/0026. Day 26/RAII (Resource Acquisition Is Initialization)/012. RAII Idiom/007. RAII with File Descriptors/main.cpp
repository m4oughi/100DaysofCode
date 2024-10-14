#include <iostream>
#include <fcntl.h>
#include <unistd.h>

class FileDescriptorManager {
    int fd;

public:
    FileDescriptorManager(const std::string& filename) {
        fd = open(filename.c_str(), O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
        if (fd != -1) {
            std::cout << "File descriptor opened." << std::endl;
        }
    }

    ~FileDescriptorManager() {
        if (fd != -1) {
            close(fd);
            std::cout << "File descriptor closed." << std::endl;
        }
    }

    void writeData(const std::string& data) {
        if (fd != -1) {
            write(fd, data.c_str(), data.size());
        }
    }
};

int main() {
    {
        FileDescriptorManager fdManager("example.txt");
        fdManager.writeData("RAII with file descriptors.");
    }  // File descriptor is automatically closed.
    std::cout << "File descriptor managed by RAII." << std::endl;
}
