#include <bits/stdc++.h>

using namespace std;

pair<int, int> split(int a, int b) {
	int half = a / 2;
	if(half > 0 && a == half * 2) {
		return {half, half};
	}
	throw runtime_error{"Can't split"};
}

int main() {
	int count; cin >> count;
	while(count--) {
		int a, b, cd; cin >> a >> b >> cd;
		int c, d;
		try {
			auto [c, d] = split(cd);
		} catch(const runtime_error&) {
			cout << "NO" << endl;
			continue;
		}

		auto list = {a, b, c, d};
		auto begin = list.begin();
		auto end = list.end();

		if(std::count(begin, end, a) == 2 && std::count(begin, end, b) == 2 && std::count(begin, end, c) == 2 && std::count(begin, end, d) == 2) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}