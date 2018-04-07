#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct calc {
	int triangle_types(int x, int y, int z);
};

int calc::triangle_types(int x, int y, int z) {
	vector<int> vec{x, y, z};
	sort(vec.begin(), vec.end());
	if (vec[0] + vec[1] > vec[2]) {
		if (pow(vec[0], 2) + pow(vec[1], 2) == pow(vec[2], 2)) {
			return 1;
		}
		else if (pow(vec[0], 2) + pow(vec[1], 2) > pow(vec[2], 2)) {
			return 2;
		}
		else if (pow(vec[0], 2) + pow(vec[1], 2) < pow(vec[2], 2)) {
			return 3;
		}
	}
	return 0;
}

int main() {
	calc obj_calc;
	int x, y, z;
	int sum = 0;
	int rig = 0;
	int acu = 0;
	int obt = 0;
	while (cin >> x >> y >> z) {
		int temp = obj_calc.triangle_types(x, y, z);
		if (temp == 1 || temp == 2 || temp == 3) {
			sum++;
			switch (temp) {
			case 1:
				rig++;
				break;
			case 2:
				acu++;
				break;
			case 3:
				obt++;
				break;
			}
		}
		else {
			break;
		}
	}
	cout << sum << " " << rig << " " << acu << " " << obt << endl;
	return 0;
}