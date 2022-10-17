struct S { int i; };
const S a[] = { 1, 2 };
const S* f(int idx) {
    if (idx >= 0 && idx < sizeof(a) / ( sizeof(a[0]) )) {
        return &a[idx];
    }
    return NULL;
}