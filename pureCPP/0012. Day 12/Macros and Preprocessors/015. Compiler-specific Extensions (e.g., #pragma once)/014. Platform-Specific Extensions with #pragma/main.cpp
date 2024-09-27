#ifdef _MSC_VER
#pragma warning(disable: 4101) // Disable unused variable warning in MSVC
#elif defined(__GNUC__)
#pragma GCC diagnostic ignored "-Wunused-variable" // Suppress warning in GCC
#endif

int main() {
    int unusedVar; // Unused variable, warning is suppressed
    return 0;
}
