#include <iostream>
using namespace std;
int main() {
	bool box[101] = { 0 };
	for (int b = 0; b < 100; b++) { box[b] = 0; }
	for (int i = 1; i < 100; i++) {
		for (int a = i; a <= 100; a = a + i) {
			box[a] = (box[a] + 1) % 2;
		}
	}
	for (int i = 1; i <= 100; i++) {
		if (box[i]) cout << i << " ";
	}
	return 0;
}
