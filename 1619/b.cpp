#include <bits/stdc++.h>

using namespace std;

int count(int n) {
	set<int> ans;
	for(int i = 1; i * i <= n; ++i) {
		ans.insert(i * i);
	}
	for(int i = 1; i * i * i <= n; ++i) {
		ans.insert(i * i * i);
	}
	return ans.size();
}

int main() {
	int count; cin >> count;
	while(count--) {
		int n; cin >> n;
		cout << ::count(n) << endl;
	}
}
