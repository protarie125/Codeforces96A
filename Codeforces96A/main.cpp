#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	if (s.length() <= 7) {
		cout << "NO";
		return 0;
	}

	auto maxct = int{ 0 };
	auto h = s[0];
	auto ct = int{ 1 };
	for (auto i = 1; i < s.length(); ++i) {
		if (h == s[i]) {
			++ct;

			maxct = max(maxct, ct);
		}
		else {
			h = s[i];
			ct = 1;
		}
	}

	cout << (7 <= maxct ? "YES" : "NO");

	return 0;
}