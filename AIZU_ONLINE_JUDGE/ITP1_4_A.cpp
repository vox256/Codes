#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << (int)(a / b) << " " << (int)a % (int)b << " " << flush;
	cout << fixed << setprecision(5) << a / b << endl;
	return 0;
}