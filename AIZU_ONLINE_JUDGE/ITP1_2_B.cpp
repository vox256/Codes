#include <iostream>
#include <string>
using namespace std;

struct calc {
	string range(int a, int b, int c);
};

string calc::range(int a, int b, int c) {
	if (a < b && b < c) {
		return "Yes";
	}
	else {
		return "No";
	}
}

int main() {
	calc obj_calc;
	int a, b, c;
	cin >> a >> b >> c;
	cout << obj_calc.range(a, b, c) << endl;
	return 0;
}