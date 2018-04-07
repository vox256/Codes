#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	sort(str.begin(), str.end());
	if (str == "abc") {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}