#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, l, x;
		cin >> n >> l >> x;
		// find the minimum number of slippers (either left or right)
		cout << min(l, n - l) * x << '\n';
	}
	return 0;
}
