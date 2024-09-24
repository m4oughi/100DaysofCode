inline static int uniqueValue2() {
    static int value = 0;
    return ++value;
}