#include <iostream>
using namespace std;

struct calc {
	bool prime_number(int num);
};

bool calc::prime_number(int num) {
	switch (num) {
	case 1: return false;
	case 2: return true;
	case 3: return true;
	} 
	if (num % 2 == 0) return false;
	if (num % 3 == 0) return false;
	if (num % 6 != 1 && num % 6 != 5) return false;
	for (int i = 5; i * i <= num; i += 6) {
		if (num % i == 0) return false;
		if (num % (i + 2) == 0) return false;
	}
	return true;
}

int main() {
	calc obj_calc;
	int n;
	while (cin >> n) {
		int num = 0;
		for (int i = 1; i <= n; i++) {
			if (obj_calc.prime_number(i) == true) {
				num++;
			}
		}
		cout << num << endl;
	}
	return 0;
}