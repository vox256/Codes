#include <iostream>
using namespace std;

int main() {
	int a, b, k, num;
	bool check = false;
	cin >> a >> b >> k;
	for (int i = 0; i < k; i++) {
		if (i + 1 < k) {
			num = a + i;
		}
		if (a + i > b) {
			check = true;
			break;
		}
		cout << a + i << endl;
	}
	for (int i = k - 1; i >= 0; i--) {
		if (check == true) {
			break;
		}
		if (b - i - 1 > num) {
			cout << b - i << endl;
		}
	}
	return 0;
}