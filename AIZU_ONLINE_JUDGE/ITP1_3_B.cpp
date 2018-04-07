#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int temp;
	while (1) {
		cin >> temp;
		if (temp == 0) {
			break;
		}
		num++;
		cout << "Case " << num << ": " << temp << endl;
	}
	return 0;
}