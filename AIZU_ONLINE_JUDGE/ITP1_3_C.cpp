#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int x, y;
	while (1) {
		cin >> x >> y;
		if (x == 0 && y == 0) {
			break;
		}
		vector<int> temp{x, y};
		sort(temp.begin(), temp.end());
		cout << temp[0] << " " << temp[1] << endl;
	}
	return 0;
}