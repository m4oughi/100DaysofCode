#if defined(__GNUC__)
#if __GNUC__ < 8
#error "GCC version 8 or higher is required!"
#endif
#endif

int main() {
    return 0;
}
