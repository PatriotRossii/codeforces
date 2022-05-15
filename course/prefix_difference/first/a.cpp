#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long n; cin >> n;

	long long sum = 0;
	cout << sum << ' ';

	while(n--) {
		long long number; cin >> number;
		sum += number; cout << sum;
		if(n != 0) {
			cout << ' ';
		}
	}
}