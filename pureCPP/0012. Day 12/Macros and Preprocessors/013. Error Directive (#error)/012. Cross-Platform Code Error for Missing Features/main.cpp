#ifdef __linux__
// Linux-specific code
#elif defined(_WIN32)
#error "This feature is not available on Windows!"
#else
#error "Unsupported platform!"
#endif

int main() {
    return 0;
}
