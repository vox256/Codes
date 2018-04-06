#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec(10);
	for (int i = 0; i < 10; i++) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end(), greater<int>());
	for (int i = 0; i < 3; i++) {
		cout << vec[i] << endl;
	}
	return 0;
}