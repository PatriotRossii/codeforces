#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int solve(ll current, ll max) {
	return (current == max) && (current != 0) ? 0 : max - current + 1;
}

int main() {
	int count; cin >> count;
	for(int i{}; i != count; ++i) {
		ll a, b, c; cin >> a >> b >> c;
		ll maximum = max(max(a, b), c);
		cout << solve(a, maximum) << ' ' << solve(b, maximum) << ' ' << solve(c, maximum) << '\n';
	}
}