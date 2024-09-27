#if defined(__x86_64__)
#pragma message "Compiling for x86_64 architecture..."
#elif defined(__arm__)
#pragma message "Compiling for ARM architecture..."
#else
#error "Unsupported architecture!"
#endif

int main() {
    return 0;
}
