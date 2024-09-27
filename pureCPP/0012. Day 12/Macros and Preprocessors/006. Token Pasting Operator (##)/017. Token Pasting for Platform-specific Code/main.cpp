#ifdef WINDOWS
#define PLATFORM_FUNC(name) windows_##name
#else
#define PLATFORM_FUNC(name) linux_##name
#endif

void PLATFORM_FUNC(display)() {
    printf("Platform-specific display function.\n");
}

int main() {
    PLATFORM_FUNC(display)(); // Expands to platform-specific function name
    return 0;
}
