void recursion(int *i) {
    if (*i >= 3) {
        return;
    }
    *i += 1;
    recursion(i);
}

int main() {
    int i = 0;
    recursion(&i);
    return 0;
}