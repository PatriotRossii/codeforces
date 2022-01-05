#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int solve() {
	int result = 0;
	int n; cin >> n;

	ll sum = 0;
	for(int i = 0; i != n; ++i) {
		int num; cin >> num;
		sum += num;
	}

	if(sum < n) {
		result = 1;
	} else if(sum > n) {
		result = sum - n;
	}

	return result;
}

int main() {
	int n; cin >> n;
	while(n--) {
		std::cout << solve() << '\n';
	}
}