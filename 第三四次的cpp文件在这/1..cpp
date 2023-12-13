#include <iostream>
using namespace std;

int main() {
    int b[10] = { 0 }; 
    int d = 0;
    for (int k = 0; k < 10; k++) {
        int a;
        cin >> a;
        bool c = true;
        for (int i = 0; i < d; i++) {
            if (b[i] == a) {
                c = false;
                break;
            }
        }
        if (c) {
            b[d] = a;
            d++; 
        }
    }
    for (int l = 0; l < d; l++) 
        cout << b[l] << " ";
    cout << endl; 
    return 0;
}