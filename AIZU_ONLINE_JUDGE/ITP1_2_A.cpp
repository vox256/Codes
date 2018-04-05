#include <iostream>
using namespace std;

struct calc {
	void small_large_or_equal(int a, int b);
};

void calc::small_large_or_equal(int a, int b) {
	if (a == b) {
		cout << "a == b" << endl;
	}
	else if (a < b) {
		cout << "a < b" << endl;
	}
	else if (a > b) {
		cout << "a > b" << endl;
	}
	return;
}

int main() {
	calc obj_calc;
	int a, b;
	cin >> a >> b;
	obj_calc.small_large_or_equal(a, b);
	return 0;
}