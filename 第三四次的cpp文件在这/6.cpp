#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < strlen(s);i++) {
		if (s[i] > 'Z') {
			counts[s[i] - 'a'] += 1;
		}
		else { counts[s[i] - 'A'] += 1; }
	}
}
int main() {
	char s[80];
	cin.getline(s, 80);
	int counts[26] = { 0 };
	count(s,counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0){
			cout << static_cast<char>(i + 'a') << "=" << counts[i] << endl;
		}
	}
}