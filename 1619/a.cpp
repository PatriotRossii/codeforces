#include <bits/stdc++.h>

using namespace std;

bool isSquare(string str) {
	size_t length = str.length();

	auto middle = length / 2;
	bool flag = length == (middle * 2);
	for(size_t i = 0; i != middle; ++i) {
		flag = flag && (str[i] == str[middle + i]);
	}
	return flag;
}

int main() {
	int n; cin >> n;
	while(n--) {
		string str; cin >> str;
		cout << (isSquare(str) ? "YES" : "NO") << endl;
	}
}