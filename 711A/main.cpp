#include <bits/stdc++.h>

using namespace std;

int main() {
	int count; cin >> count; cin.ignore();
	std::vector<pair<string, string>> seats;
	for(size_t i = 0; i != count; ++i) {
		std::string row; getline(cin, row);
		std::string firstSeat = row.substr(0, 2);
		std::string secondSeat = row.substr(3, 2);
		seats.emplace_back(firstSeat, secondSeat);
	}
	
	bool flag = false;
	for(auto& row: seats) {
		if(row.first == "OO") { 
			row.first = "++"; flag = true;
			break;
		} else if(row.second == "OO") {
			row.second = "++"; flag = true;
			break;
		}
	}

	cout << (flag ? "YES" : "NO") << endl;
	if(flag) {
		for(auto& row: seats) {
			cout << row.first << '|' << row.second << endl;
		}
	}
}