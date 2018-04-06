#include <iostream>
#include <cmath>
using namespace std;

struct calc {
	int digit_number(int a, int b);
};

int calc::digit_number(int a, int b) {
	return (((int)log10(a + b) + 1));
}

int main() {
	calc obj_calc;
	int a, b;
	while (cin >> a >> b) {
		cout << obj_calc.digit_number(a, b) << endl;
	}
	return 0;
}