#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	int max = INT_MIN;
	int min = INT_MAX;
	long long int sum = 0;
	cin >> n;
	while (n != 0) {
		int temp;
		cin >> temp;
		sum += temp;
		if (temp > max) {
			max = temp;
		}
		if (temp < min) {
			min = temp;
		}
		n--;
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}