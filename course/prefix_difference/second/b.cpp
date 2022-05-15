#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vector<long long> sum(n + 1, 0);

	for(int i = 0; i != n; ++i) {
		long long number; cin >> number;
		sum[i + 1] = sum[i] ^ number;
	}

	int q; cin >> q;
	while(q--) {
		int l, r; cin >> l >> r;
		cout << (sum[r] ^ sum[l - 1]) << '\n';
	}
}