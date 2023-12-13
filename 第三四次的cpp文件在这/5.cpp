#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char a[], const char b[]) {
    char d[80];
    bool c = true;
    int i = 0;

    for (; i < strlen(b); i++) {
        for (int j = 0; j < strlen(a); j++) {
            d[j] = b[i + j];
        }
        d[strlen(a)] = '\0';

        if (strcmp(d, a) == 0) {
            c = false;
            break;
        }
    }

    if (c) {
        return -1;
    }
    else {
        return i;
    }
}

int main() {
    char a[80], b[80];
    cin >> a >> b;
    cout << indexOf(a, b);

    return 0;
}