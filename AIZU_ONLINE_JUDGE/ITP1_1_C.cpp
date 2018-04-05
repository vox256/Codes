#include <iostream>
using namespace std;

struct calc {
	void rectangle(int a, int b);
};

void calc::rectangle(int a, int b) {
	cout << a * b << " " << (a + b) * 2 << endl;
	return;
}

int main() {
	calc obj_calc;
	int a, b;
	cin >> a >> b;
	obj_calc.rectangle(a, b);
	return 0;
}