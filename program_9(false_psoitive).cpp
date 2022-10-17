#define MAX 34
int f(void) {
    int i; int k;
    int arr[MAX] = {};
    i = 1;
    for (k = 0; k < MAX && i < MAX; k++) {
        i++;
    }
    return arr[k];
}
