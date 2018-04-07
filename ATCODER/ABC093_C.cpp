#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	int num = 0;
	cin >> a >> b >> c;
	vector<int> data{a, b, c};
	while (!(data[0] == data[1] && data[1] == data[2] && data[2] == data[0])) {
		sort(data.begin(), data.end());
		if (data[1] != data[2]) {
			data[0] += 1;
			data[1] += 1;
			num++;
		}
		else {
			data[0] += 2;
			num++;
		}
	}
	cout << num << endl;
	return 0;
}