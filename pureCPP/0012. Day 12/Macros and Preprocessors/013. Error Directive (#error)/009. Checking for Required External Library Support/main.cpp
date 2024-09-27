#ifdef USE_MY_LIB
// Code using the external library
#else
#error "The external library MY_LIB is required!"
#endif

int main() {
    return 0;
}
