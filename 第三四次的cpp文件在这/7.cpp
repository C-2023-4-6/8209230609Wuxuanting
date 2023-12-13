#include <iostream>
#include <cstring> 
using namespace std;

int indexof(const char* s1, const char* s2) {
    char d[80];
    bool c = true;
    int i = 0;

    for (; i <= strlen(s2) - strlen(s1); i++) { 
        for (int j = 0; j < strlen(s1); j++) {
            d[j] = *(s2 + i + j); 
        }
        d[strlen(s1)] = '\0';

        if (strcmp(d, s1) == 0) {
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
    cout << indexof(a, b);

    return 0;
}