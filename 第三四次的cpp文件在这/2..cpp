#include <iostream>
using namespace std;
int main() {
	double list[10] = { 10,1,8,7,5,6,4,3,2,9 };
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				double a = list[j];
				list[j] = list[j + 1]; 
				list[j + 1] = a;
				changed = true;
			}
	} while (changed);
	for (int l = 0; l < 10; l++)
		cout << list[l] << " ";
	cout << endl;
	return 0;
}