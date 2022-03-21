#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = int{ 2 };
	while (1 < (n--)) {
		ans *= 2;
	}

	cout << ans;

	return 0;
}