#include <iostream>
using namespace std;

struct calc {
	int how_many_divisors(int a, int b, int c);
};

int calc::how_many_divisors(int a, int b, int c) {
	int num = 0;
	for (int i = a; i <= b; i++) {
		if (c % i == 0) {
			num++;
		}
	}
	return num;
}

int main() {
	calc obj_calc;
	int a, b, c;
	cin >> a >> b >> c;
	cout << obj_calc.how_many_divisors(a, b, c) << endl;
	return 0;
}