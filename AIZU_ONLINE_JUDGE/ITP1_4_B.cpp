#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double r;
	cin >> r;
	cout << fixed << setprecision(6) << pow(r, 2) * M_PI << " " << flush;
	cout << fixed << setprecision(6) << r * 2 * M_PI << endl;
	return 0;
}