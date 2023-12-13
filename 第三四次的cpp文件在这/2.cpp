#include <iostream>
using namespace std;
bool is_prime(int num) {
	int i=2;
	if (num == 2) { return true; }
	while(num%i!=0 and i<=num/2) {
		i = i + 1;
	}
	if (num % i == 0) {
		return false;
	}
	else { return true; }
}
int main()
{
	for(int n=0,i=2;n<200;i++){
		if (is_prime(i)) {
			cout << i << " ";
			n++;
			if (n % 10 == 0) {
				cout << "\n";
			}
		}
	}
}