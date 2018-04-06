#include <iostream>
#include <string>
using namespace std;

struct calc {
	string circle_in_a_rectangle(int W, int H, int x, int y, int r);
};

string calc::circle_in_a_rectangle(int W, int H, int x, int y, int r) {
	if (x - r >= 0 && y - r >= 0 && x + r <= W && y + r <= H) {
		return "Yes";
	}
	else {
		return "No";
	}
}

int main() {
	calc obj_calc;
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	cout << obj_calc.circle_in_a_rectangle(W, H, x, y, r) << endl;
	return 0;
}