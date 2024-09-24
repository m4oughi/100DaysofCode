inline static int uniqueValue1() {
    static int value = 0;
    return ++value;
}