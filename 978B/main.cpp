#include <bits/stdc++.h>

using namespace std;

int main() {
	int _; cin >> _;
	string filename; cin >> filename;
	
	int result{}, counter{};
	char previousCharacter{filename.front()};

	for(char x: filename) {
		if(x == previousCharacter && x == 'x') {
			counter += 1;
		} else {
			if(counter > 2) result += (counter - 2);
			counter = 0;
		}
		previousCharacter = 'x';
	}

	if(counter > 2) result += (counter - 2);

	cout << result;
}