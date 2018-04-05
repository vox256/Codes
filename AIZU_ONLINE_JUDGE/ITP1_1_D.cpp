#include <iostream>
using namespace std;

struct calc {
	void watch(int S);
};

void calc::watch(int S) {
	int h, m, s;
	s = S % 60;
	m = (S % 3600 - s) / 60;
	h = (S - (60 * m + s)) / 3600;
	cout << h << ":" << m << ":" << s << endl;
	return;
}

int main() {
	calc obj_calc;
	int S;
	cin >> S;
	obj_calc.watch(S);
	return 0;
}