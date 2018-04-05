#include <iostream>
#include <cmath>
using namespace std;

struct calc {
	int x_cubic(int x);
};

int calc::x_cubic(int x) {
	return pow(x, 3);
}

int main() {
	calc obj_calc;
	int x;
	cin >> x;
	cout << obj_calc.x_cubic(x) << endl;
	return 0;
}