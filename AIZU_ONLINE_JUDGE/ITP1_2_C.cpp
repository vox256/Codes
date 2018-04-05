#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct calc {
	void sorting_three_numbers(int x, int y, int z);
};

void calc::sorting_three_numbers(int x, int y, int z) {
	vector<int> vec{x, y, z};
	sort(vec.begin(), vec.end());
	for (int i = 0; i < 3; i++) {
		if (i != 0) {
			cout << " " << flush;
		}
		cout << vec[i] << flush;
		if (i + 1 >= 3) {
			cout << endl;
		}
	}
	return;
}

int main() {
	calc obj_calc;
	int x, y, z;
	cin >> x >> y >> z;
	obj_calc.sorting_three_numbers(x, y, z);
	return 0;
}