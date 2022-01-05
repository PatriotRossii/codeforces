#include <bits/stdc++.h>

using namespace std;

int main() {
	int datasets; cin >> datasets;
	for(size_t i{}; i != datasets; ++i) {
		int datasetLength; cin >> datasetLength;

		deque<int> dataset;
		for(size_t j{}; j != datasetLength; ++j) {
			int number; cin >> number;
			dataset.push_back(number);
		}

		std::size_t result{};
		while(true) {
			auto lengthBefore = dataset.size();
			int sum = accumulate(dataset.begin(), dataset.end(), 0);
			double avg = sum / static_cast<double>(lengthBefore);

			erase_if(dataset, [avg](int& x) { return x > avg; });

			auto changed = lengthBefore - dataset.size();
			if(changed) { result += changed; } else { break; }
		}

		cout << result << endl;
	}
}