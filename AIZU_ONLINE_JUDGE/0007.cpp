#include <iostream>
using namespace std;

struct calc {
	int debt_hell(int n);
};

int calc::debt_hell(int n) {
	int debt = 100000;
	for (int i = 0; i < n; i++) {
		debt *= 1.05;
		if (debt % 1000 != 0) {
			debt -= debt % 1000;
			debt += 1000;
		}
	}
	return debt;
}

int main() {
	calc obj_calc;
	int n;
	cin >> n;
	cout << obj_calc.debt_hell(n) << endl;
	return 0;
}