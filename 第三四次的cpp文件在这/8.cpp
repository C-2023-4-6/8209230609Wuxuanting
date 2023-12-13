#include <iostream>
#include <cstring>
using namespace std;

int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    const char* p = hexString;

    for (int i = 0; i < len; ++i) {
        char c = *(p + i);
        int digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        }
        else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        }
        else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        }
        else {
            cerr << "Invalid hex string." << endl;
            return -1;
        }

        result += digit * pow(16, len - 1 - i);
    }

    return result;
}

int main() {
    char hexString[80];
    cin >> hexString;
    int decimal = parseHex(hexString);
    cout << decimal << endl;

    return 0;
}